/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deleteKey.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:59:39 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/12 17:23:38 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftchain.h"

struct node			*ft_deleteKey(int key)
{
	struct node		*current;
	struct node		*prev;

	current = head;
	if (head == NULL)
		return (NULL);
	while (current->key != key)
	{
		if (current->next == NULL)
			return (NULL);
		else
		{
			prev = current;
			current = current->next;
		}
	}
	if (current == head)
		head = head->next;
	else
		prev->next = current->next;
	return (current);
}
