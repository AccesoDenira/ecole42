/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:29:48 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 19:14:10 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countnum(const char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] && ft_isdigit(str[counter]))
		counter++;
	return (counter);
}

int				ft_atoi(const char *str)
{
	int		tmp;
	int		stat;

	tmp = 0;
	stat = -1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		stat = 0;
	if (*str == '-' || *str == '+')
		str++;
	if (ft_countnum(str) > 10)
		return (stat);
	while (*str && ft_isdigit(*str))
	{
		tmp = tmp * 10 + *str - '0';
		str++;
	}
	if (stat == 0)
		return (-tmp);
	else
		return (tmp);
}
