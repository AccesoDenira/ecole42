/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertFirst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:10:55 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/12 17:24:17 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ftchain.h"

void		ft_insertFirst(int key, int data)
{
	struct node		*link;

	link = (struct node *)malloc(sizeof(struct node));
	link->key = key;
	link->data = data;
	link->next = head;
	head = link;
}
