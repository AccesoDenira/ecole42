/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:11:19 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 18:03:45 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		car;
	const unsigned char	*ptr;
	size_t				i;

	i = 0;
	car = (unsigned char)c;
	ptr = (const unsigned char*)s;
	if (!s)
		return (0);
	while (i < n)
	{
		if (*ptr == car)
			return ((void*)ptr);
		ptr++;
		i++;
	}
	return (NULL);
}
