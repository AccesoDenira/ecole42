/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:35:40 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/12 17:17:33 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftchain.h"

int			main(void)
{
	int		count;

	count = 0;
	while (count++ < 7)
		ft_insertFirst(count, count * 10);
	ft_putstr_fd("Original List: ", 1);
	ft_printList();
	return (0);
}
