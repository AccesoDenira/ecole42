/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:03:25 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/07 11:31:29 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *src)
{
	int		count;

	count = 0;
	while (src[count] != '\0')
		count++;
	return (count);
}

char		*ft_strdup(char *src)
{
	char	*dest;
	int		index;

	index = 0;
	dest = (char*)malloc(sizeof(*dest) * ft_strlen(src) + 1);
	if (!dest)
		return (0);
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
