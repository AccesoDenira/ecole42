/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 19:33:55 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/06 19:41:17 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		index;
	int		counter;

	index = 0;
	counter = 0;
	while (tab[index])
	{
		if (f(tab[index]) == 1)
			counter++;
		index++;
	}
	return (counter);
}
