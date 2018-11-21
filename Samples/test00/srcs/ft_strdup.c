/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:21:32 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 11:24:02 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	index;

	index = 0;
	s2 = (char*)malloc(sizeof(*s2) * ft_strlen(s1) + 1);
	if (!s2)
		return (0);
	while (s1[index] != '\0')
	{
		s2[index] = s1[index];
		index++;
	}
	s2[index] = '\0';
	return (0);
}
