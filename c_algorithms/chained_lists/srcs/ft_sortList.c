/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortList.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:00:45 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/12 17:02:31 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftchain.h"

void				ft_sortList(void)
{
	struct node		*current;
	struct node		*next;
	int				i;
	int				j;
	int				k;
	int				tempKey;
	int				tempData;
	int				size;

	size = ft_lenght();
	k = size;
	i = 0;
	j = 1;
	while (i < size - 1)
	{
		current = head;
		next = head->next;
		while (j < k)
		{
			if (current->data > next->data)
			{
				tempData = current->data;
				current->data = next->data;
				next->data = tempData;
				tempKey = current->key;
				current->key = next->key;
				next->key = tempKey;
			}
			j++;
			current = current->next;
			next = next->next;
		}
		i++;
		k--;
	}
}
