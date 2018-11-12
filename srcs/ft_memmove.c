/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:09:11 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 17:53:41 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memmove(void *s1, const void *s2, size_t len)
{
	void	*tmp[len];

	ft_memcpy(tmp, s2, len);
	ft_memcpy(s1, tmp, len);
	return (s1);
}
