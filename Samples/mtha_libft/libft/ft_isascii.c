/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:53:36 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/09 12:54:39 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int c)
{
	return ((unsigned)c <= 0177);
}
