/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 19:49:04 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/24 20:33:09 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int			ft_verify_line(char **stack, char **line)
{
	char			*tmp_st;
	char			*strc_stack;
	int				index;

	index = 0;
	strc_stack = *stack;
	while (strc_stack[index] != '\n')
		if (!strc_stack[index++])
			return (0);
	tmp_st = &strc_stack[index];
	*tmp_st = '\0';
	*line = ft_strdup(*stack);
	*stack = ft_strdup(tmp_st + 1);
	return (1);
}

static int			ft_read_file(int fd, char *heap, char **stack, char **line)
{
	int				rvalue;
	char			*tmp_stk;

	while ((rvalue = read(fd, heap, BUFF_SIZE)) > 0)
	{
		heap[rvalue] = '\0';
		if (*stack)
		{
			tmp_stk = *stack;
			*stack = ft_strjoin(tmp_stk, heap);
			free(tmp_stk);
			tmp_stk = NULL;
		}
		else
			*stack = ft_strdup(heap);
		if (ft_verify_line(stack, line))
			break ;
	}
	if (rvalue > 0)
		return (1);
	return (rvalue);
}

int					get_next_line(int const fd, char **line)
{
	static char		*stack[MAX_FD];
	char			*heap;
	int				rvalue;

	if (line == NULL || (fd < 0 || fd > MAX_FD) || (read(fd, stack[fd], 0) < 0)
				|| !(heap = ft_strnew(BUFF_SIZE + 1)))
		return (-1);
	if (stack[fd])
		if (ft_verify_line(&stack[fd], line))
			return (1);
	rvalue = ft_read_file(fd, heap, &stack[fd], line);
	free(heap);
	if (rvalue != 0 || stack[fd] == NULL || stack[fd][0] == '\0')
	{
		if (!rvalue && *line)
			*line = NULL;
		return (rvalue);
	}
	*line = stack[fd];
	stack[fd] = NULL;
	return (1);
}
