/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:34:01 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 12:34:55 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(const char *str)
{
	int	i;

	i = 0;
	while (str[i] && ft_isdigit(str[i]))
		i++;
	return (i);
}

int			ft_atoi(const char *str)
{
	int		sign;
	int		num;

	sign = -1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign = 0;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && *str == '0')
		str++;
	if (count_digit(str) > 10)
		return (sign);
	num = 0;
	while (*str && ft_isdigit(*str))
	{
		num = num * 10 + *str - '0';
		str++;
	}
	if (!sign)
		num = -num;
	return (num);
}
