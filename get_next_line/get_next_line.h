/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 11:00:36 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/21 14:27:21 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32
# define ERROR_CHECK(x) if (!x) return (-1)
# define MAX_FD 1025
# include "libft.h"
# include <stdlib.h>

int		get_next_line(const int fd, char **line);

#endif
