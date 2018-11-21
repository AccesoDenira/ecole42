/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:02:38 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 18:04:37 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strchr(const char *s, int c)
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
