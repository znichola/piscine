/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:49:32 by znichola          #+#    #+#             */
/*   Updated: 2022/06/30 23:22:55 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_multi(int a, int b)
{
	ft_putnbr(a * b);
	write(1, "\n", 1);
}

void	ft_div(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : division by zero\n", 25);
		return ;
	}
	ft_putnbr(a / b);
	write(1, "\n", 1);
}

void	ft_plus(int a, int b)
{
	ft_putnbr(a + b);
	write(1, "\n", 1);
}

void	ft_minus(int a, int b)
{
	ft_putnbr(a - b);
	write(1, "\n", 1);
}

void	ft_modulo(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : modulo by zero\n", 23);
		return ;
	}
	ft_putnbr(a % b);
	write(1, "\n", 1);
}
