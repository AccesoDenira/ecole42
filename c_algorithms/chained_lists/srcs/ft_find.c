/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:51:50 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/12 14:58:39 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftchain.h"

struct node				*ft_find(int key)
{
	struct node			*current;

	current = head;
	if (head == NULL)
		return (NULL);
	while (current->key != key)
	{
		if (current->next == NULL)
			return (NULL);
		else
			current = current->next;
	}
	return (current);
}
