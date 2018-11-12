/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:43:57 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/07 11:55:14 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_exchange(char **av, int index)
{
	char	*tmp;

	tmp = av[index];
	av[index] = av[index + 1];
	av[index + 1] = tmp;
}

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac > 1)
	{
		if (ac > 2)
		{
			while (++i < ac - 1)
				if (ft_strcmp(av[i], av[i + 1]) > 0)
				{
					ft_exchange(av, i);
					i = 0;
				}
		}
		i = 0;
		while (++i < ac)
		{
			ft_putstr(av[i]);
			ft_putchar('\n');
		}
	}
	return (0);
}
