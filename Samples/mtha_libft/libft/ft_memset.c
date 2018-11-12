/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:01:26 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 11:02:10 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_b;

	tmp_b = (unsigned char*)b;
	while (len && tmp_b)
	{
		*tmp_b = c;
		tmp_b++;
		len--;
	}
	return (b);
}
