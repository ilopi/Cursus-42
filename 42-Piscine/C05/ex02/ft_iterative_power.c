/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issanche <issanche@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:41:48 by issanche          #+#    #+#             */
/*   Updated: 2023/09/20 18:41:48 by issanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;
	int p;

	p = power;
	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power-- > 0)
		res = nb * res;
	return (res);
}
