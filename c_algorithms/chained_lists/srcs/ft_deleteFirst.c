/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deleteFirst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:18:41 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/12 17:23:21 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftchain.h"

struct node			*ft_deleteFirst(void)
{
	struct node		*tmpLink;

	head = NULL;
	tmpLink = head;
	head = head->next;
	return (tmpLink);
}
