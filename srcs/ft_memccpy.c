/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:56:26 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 11:06:24 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*d;
	char		*s;
	char		ltr;

	ltr = (char)c;
	d = (char*)dest;
	s = (char*)src;
	if (s && d)
	{
		while (n != 0 && *s != ltr)
		{
			*d = *s;
			d++;
			s++;
			n--;
		}
		if (*s == ltr)
		{
			*d = *s;
			return ((void*)++d);
		}
	}
	return (NULL);
}
