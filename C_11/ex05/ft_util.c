/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:59:01 by znichola          #+#    #+#             */
/*   Updated: 2022/06/30 23:23:02 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putsrt(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

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

int	is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	n;
	int	s;

	s = 1;
	n = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s *= -1;
		str++;
	}
	if (!is_numeric(*str))
		return (0);
	n = *str - '0';
	str++;
	while (is_numeric(*str))
	{
		n = 10 * n + *str - '0';
		str++;
	}
	n *= s;
	return (n);
}
