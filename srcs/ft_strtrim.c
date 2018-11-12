/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:29:18 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 18:22:27 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	index;
	size_t	len;

	if (s)
	{
		len = ft_strlen(s) - 1;
		index = 0;
		while (ft_isspace(s[index]) && s[index])
			index++;
		if (!s[index])
			return (ft_strnew(1));
		while (len != index && ft_isspace(s[len]))
			len--;
		if (!index && len == ft_strlen(s) - 1)
		{
			str = ft_strsub(s, 0, ft_strlen(s));
			return (str);
		}
		str = ft_strsub(s, index, len - index + 1);
		if (!str)
			return (NULL);
		return (str);
	}
	return (NULL);
}
