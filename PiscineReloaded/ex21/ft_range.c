/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:17:34 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/06 18:44:59 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		index;

	if (min >= max)
		return (NULL);
	index = 0;
	tab = (int*)malloc(sizeof(*tab) * max - min);
	if (!tab)
		return (0);
	while (min < max)
	{
		tab[index] = min;
		min++;
		index++;
	}
	return (tab);
}
