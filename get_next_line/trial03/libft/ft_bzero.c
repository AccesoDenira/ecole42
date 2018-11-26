/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:19:09 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/24 20:33:18 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void			ft_bzero(void *s, size_t n)
{
	char		*tmp;
	size_t		index;

	if (!n)
		return ;
	tmp = s;
	index = 0;
	while (index < n)
		*(tmp + index++) = 0;
}
