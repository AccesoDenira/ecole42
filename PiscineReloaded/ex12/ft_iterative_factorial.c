/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:38:34 by mndhlovu          #+#    #+#             */
/*   Updated: 2018/11/06 16:33:32 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		res;

	res = nb;
	if (res == 1 || res == 0)
		return (1);
	else if (res < 0 || res > 15)
		return (0);
	else
	{
		while (res > 1)
		{
			res--;
			nb *= res;
		}
	}
	return (nb);
}
