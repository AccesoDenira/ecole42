/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:14:03 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/12 16:18:35 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftchain.h"

void		ft_reverse(struct node **head_ref)
{
	struct node		*prev;
	struct node		*current;
	struct node		*next;

	prev = NULL;
	current = *head_ref;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head_ref = prev;
}
