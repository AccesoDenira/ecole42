/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:16:47 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 15:18:57 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <string.h>
#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
	{
		if (!ft_strncmp((const char*)s1, (const char*)s2, n))
			return (1);
	}
	return (0);
}
