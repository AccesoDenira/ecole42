/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:11:52 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 13:14:02 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ptr;

	ptr = (char*)malloc(sizeof(*ptr) * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, size);
	return ((void*)ptr);
}
