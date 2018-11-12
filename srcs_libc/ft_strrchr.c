/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:09:12 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 11:39:58 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strrchr(const char *s, int c)
{
	const char	*ret;
	char		ltr;

	ltr = (char)c;
	while (*s)
	{
		if (*s == ltr)
			ret = s;
		s++;
	}
	if (*s == ltr)
		ret = s;
	return ((char*)ret);
}
