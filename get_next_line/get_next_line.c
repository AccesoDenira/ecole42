/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 11:09:13 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/21 18:45:13 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list			*ft_verify(t_list **file, int fd)
{
	t_list				*tmp;

	tmp = *file;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("\0", fd);
	tmp = *file;
	return (tmp);
}

static char				*ft_strjchr(const char *s, char c)
{
	char				*nstr;
	size_t				index;
	size_t				slen;

	if (!s || !c)
		return (NULL);
	slen = ft_strlen(s);
	if (!(nstr = ft_strnew(slen + 1)))
		return (NULL);
	index = -1;
	while (++index < slen)
		*(nstr + index) = *(s + index);
	*(nstr + index) = c;
	return (nstr);
}

static int				ft_dup(char **d, char *s, char c)
{
	int					index;
	int					position;
	int					counter;

	index = -1;
	counter = 0;
	while (s[index++])
		if (s[index] == c)
			break ;
	position = index;
	if (!(*d = ft_strnew(index)))
		return (0);
	while (s[counter] && counter < index)
	{
		if (!(*d = ft_strjchr(*d, s[counter])))
			return (0);
		counter++;
	}
	return (position);
}

int						get_next_line(int const fd, char **line)
{
	char				buff[BUFF_SIZE + 1];
	static t_list		*file;
	int					index;
	int					rtn;
	t_list				*current;

	if (fd < 0 || !line || (read(fd, buff, BUFF_SIZE) < 0))
		return (-1);
	current = ft_verify(&file, fd);
	ERROR_CHECK((*line = ft_strnew(BUFF_SIZE + 1)));
	while ((rtn = read(fd, buff, 0)))
	{
		buff[rtn] = '\0';
		ERROR_CHECK((current->content = ft_strjoin(current->content, buff)));
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (rtn < BUFF_SIZE && !ft_strlen(current->content))
		return (0);
	index = ft_dup(line, current->content, '\n');
	if (index < (int)ft_strlen(current->content))
		current->content += (index + 1);
	else
		ft_strclr(current->content);
	return (1);
}
