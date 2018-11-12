/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:27:48 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 17:35:20 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		index;
	char				*str;

	index = 0;
	if (!s || !f)
		return (0);
	str = ft_strnew(ft_strlen(s));
	if (!str)
		return (0);
	while (s[index])
	{
		str[index] = f(index, s[index]);
		index++;
	}
	return (str);
}
