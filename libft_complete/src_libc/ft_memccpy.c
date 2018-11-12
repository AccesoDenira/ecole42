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

void    		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*d;
	size_t      index;

	index = -1;
	d = dest;
    while (++index < n)
    {
        *(d + index) = *((unsigned char *)src + index);
        if (*((unsigned char *)src + 1) == (unsigned char)c)
            return (dest + index + 1);
    }
	return (NULL);
}
