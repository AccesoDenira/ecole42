/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lenght.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:47:08 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/12 14:51:11 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftchain.h"

int					ft_lenght(void)
{
	int				len;
	struct node		*current;

	len = 0;
	current = head;
	while (current != NULL)
	{
		current = current->next;
		len++;
	}
	return (len);
}
