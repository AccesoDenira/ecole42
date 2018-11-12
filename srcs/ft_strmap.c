/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:13:00 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 18:16:31 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char		*str;
	size_t		index;

	if (!s || !f)
		return (0);
	index = 0;
	str = ft_strnew(ft_strlen(s));
	if (!str)
		return (0);
	while (s[index])
	{
		str[index] = f(s[index]);
		index++;
	}
	return (str);
}
