/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:51:19 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 11:53:07 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t len;

	if (!*s2)
		return ((char *)s1);
	len = 0;
	while (s2[len])
		len++;
	while (n-- >= len && *s1)
	{
		if (*s1 == *s2 && !ft_memcmp(s1, s2, len))
			return ((char *)s1);
		s1++;
	}
	return (0);
}
