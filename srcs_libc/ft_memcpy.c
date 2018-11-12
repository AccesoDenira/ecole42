/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:40:46 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 17:50:44 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	char		*s;
	size_t		index;

	index = 0;
	d = (char*)dest;
	s = (char*)src;
	if (d && s)
	{
		while (index < n)
		{
			*d = *s;
			d++;
			s++;
			index++;
		}
	}
	return (dest);
}
