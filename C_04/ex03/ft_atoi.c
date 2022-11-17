/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 21:38:57 by znichola          #+#    #+#             */
/*   Updated: 2022/06/16 21:39:04 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

/*
int main(void)
{
	char *t =  "   ---+--+1234ab567";
	printf("%d\n", ft_atoi(t));
}
*/