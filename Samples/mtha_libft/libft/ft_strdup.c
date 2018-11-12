/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:23:27 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 11:24:08 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = (char*)malloc (sizeof(*tmp) * (ft_strlen(s1) + 1));
	if (!tmp)
		return (NULL);
	while (s1[i] && s1)
	{
		tmp[i] = s1[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
