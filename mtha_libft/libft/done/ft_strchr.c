/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:37:51 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 18:05:05 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char*)s;
	if (s)
	{
		while (*tmp != c && *tmp)
			tmp++;
		if (*tmp != c)
			return (NULL);
	}
	return (tmp);
}
