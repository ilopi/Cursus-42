/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issanche <issanche@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:41:48 by issanche          #+#    #+#             */
/*   Updated: 2023/09/20 18:41:48 by issanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb == -2147483648)
	{
		write(1, "2147483648", 12);
		return ;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	ft_putchar(nb + 48);
}
