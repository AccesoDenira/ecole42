/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 19:42:43 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/06 20:11:26 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dis.h"
#define BUFFER_SIZE 4096

int		main(int ac, char **av)
{
	int		fd;
	int		size;
	char	buff[BUFFER_SIZE + 1];

	if (ac == 1)
		write(1, "File name missing.\n", 19);
	if (ac >= 3)
		write(1, "Too many arguments.\n", 20);
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
			return (1);
		while ((size = read(fd, buff, BUFFER_SIZE)))
		{
			buff[size] = '\0';
			write(1, buff, size);
		}
		if (close(fd) == -1)
			return (1);
	}
	return (0);
}
