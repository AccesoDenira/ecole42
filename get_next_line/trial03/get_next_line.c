/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 17:51:02 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/26 21:24:47 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int			ft_verify_line(char **stack, char **line)
{
	char			*tmp_stk;
	char			*strc_stk;
	int				index;
	char			*temp;

	index = 0;
	strc_stk = *stack;
	while (strc_stk[index] != '\n')
		if (!strc_stk[index++])
			return (0);
	tmp_stk = &strc_stk[index];
	*tmp_stk = '\0';
	*line = ft_strdup(*stack);
	temp = *stack;
	free(temp);
	*stack = ft_strdup(tmp_stk + 1);
	return (1);
}

static int			ft_read_file(int fd, char *heap, char **stack, char **line)
{
	int				status;
	char			*tmp_stk;

	while ((status = read(fd, heap, BUFF_SIZE)) > 0)
	{
		heap[status] = '\0';
		if (*stack)
		{
			tmp_stk = *stack;
			if (!(*stack = ft_strjoin(tmp_stk, heap)))
				return (-1);
			ft_strdel(&tmp_stk);
		}
		else
			*stack = ft_strdup(heap);
		if (ft_verify_line(stack, line))
			break ;
	}
	if (status > 0)
		return (1);
	return (status);
}

int					get_next_line(const int fd, char **line)
{
	static char		*stack[MAX_FD];
	char			*heap;
	int				status;

	if (line == NULL || (fd < 0 || fd > MAX_FD) || (read(fd, stack[fd], 0) < 0)
			|| !(heap = ft_strnew(BUFF_SIZE + 1)))
		return (-1);
	if (stack[fd])
		if (ft_verify_line(&stack[fd], line))
			return (1);
	status = ft_read_file(fd, heap, &stack[fd], line);
	free(heap);
	if (status != 0 || stack[fd] == NULL || stack[fd][0] == '\0')
	{
		if (!status && *line)
			*line = NULL;
		return (status);
	}
	if (!(*line = ft_strdup(stack[fd])))
		return (-1);
	ft_strdel(&stack[fd]);
	return (1);
}
