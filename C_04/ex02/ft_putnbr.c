/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:45:24 by znichola          #+#    #+#             */
/*   Updated: 2022/06/16 17:45:26 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

void	write_digit(int n)
{
	n %= 10;
	n += '0';
	write(1, &n, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
	{
		write_digit(nb);
		return ;
	}
	ft_putnbr(nb / 10);
	write_digit(nb);
}

/*
int main(void)
{
	ft_putnbr(INT_MAX);
	ft_putnbr(INT_MIN);
	ft_putnbr(INT_MIN-1);
	ft_putnbr(0);
}
*/