/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printList.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:19:33 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/12 17:13:17 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftchain.h"

void		ft_printList(void)
{
	struct node		*ptr;

	ptr = head;
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("[ ", 1);
	while (ptr != NULL)
	{
		ft_putstr_fd(" (", 1);
		ft_putnbr_fd(ptr->key, 1);
		ft_putstr_fd(", ", 1);
		ft_putnbr_fd(ptr->data, 1);
		ft_putstr_fd(") ", 1);
		ptr = ptr->next;
	}
	ft_putstr_fd(" ]", 1);
}
