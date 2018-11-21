/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:28:41 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 18:57:05 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char			*tmp;
	unsigned char				ltr;
	size_t						index;

	tmp = (unsigned char*)s;
	ltr = (unsigned char)c;
	index = 0;
	if (!s)
		return (0);
	while (index < n)
	{
		if (*tmp == ltr)
			return ((void*)tmp);
		index++;
		tmp++;
	}
	return (NULL);
}
