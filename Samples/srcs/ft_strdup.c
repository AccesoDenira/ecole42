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
    char    *tmp;

    if (!(tmp = ft_strnew(ft_strlen(s1))))
        return (NULL);
    ft_strncpy(tmp, s1, ft_strlen(s1));
    return (tmp);
}
