/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:03:20 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 11:04:38 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <string.h>

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*tmp_d;
	char	*tmp_s;
	size_t	u;

	tmp_s = (char*)src;
	tmp_d = (char*)dest;
	u = 0;
	if (tmp_s && tmp_d)
	{
		while (u < n)
		{
			*tmp_d = *tmp_s;
			tmp_s++;
			tmp_d++;
			u++;
		}
	}
	return (dest);
}
