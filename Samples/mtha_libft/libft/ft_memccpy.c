/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:05:08 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 11:06:28 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*tmp_d;
	char	*tmp_s;
	char	car;

	car = (char)c;
	tmp_s = (char*)src;
	tmp_d = (char*)dest;
	if (dest && src)
	{
		while (n != 0 && *tmp_s != car)
		{
			*tmp_d = *tmp_s;
			tmp_d++;
			tmp_s++;
			n--;
		}
		if (*tmp_s == car)
		{
			*tmp_d = *tmp_s;
			return ((void*)++tmp_d);
		}
	}
	return (NULL);
}
