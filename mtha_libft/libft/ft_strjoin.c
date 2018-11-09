/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:32:17 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 15:42:47 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp_s1;

	tmp_s1 = NULL;
	if (s1 && s2)
	{
		tmp_s1 = ft_strnew(ft_strlen(s2) + ft_strlen(s1));
		if (!tmp_s1)
			return (NULL);
		ft_strcpy(tmp_s1, s1);
		ft_strcat(tmp_s1, s2);
	}
	return (tmp_s1);
}
