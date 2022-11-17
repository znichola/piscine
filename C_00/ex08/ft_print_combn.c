/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:21:34 by znichola          #+#    #+#             */
/*   Updated: 2022/06/24 12:44:15 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putdigit(int n)
{
	n = n % 10 + '0';
	write(1, &n, 1);
}

void	ft_putnbr(int n)
{
	if (n < 10)
	{
		ft_putdigit(n);
		return ;
	}
	ft_putnbr(n/10);
	ft_putdigit(n);
}

void	ft_genrate_combn(int *arr, int data, int start, int end, int index, int n)
{
	int	j;

	if (index == n)
	{
		j = 0;
		while (j < n)
		{
			ft_putnbr(data);
			j++;
		}
		write(1, "\n", 1);
		return ;
	}
	j = start;
	while (j < end && end - j + 1 >= n - index)
	{
		printf("somewhere here %d\n", data);
		data = data * index + arr[j];
		ft_genrate_combn(arr, data, j + 1, end, index + 1, n);
		j++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;
	int	data = 0;

	i = 0;
	while (i < 10)
	{
		arr[i] = i;
		i++;
	}
	ft_genrate_combn(arr, data, 0, 10, 0, n);
}

int	main(int argc, char **argv)
{
	argc  = 1;
	int n = atoi(argv[argc]);
	ft_print_combn(n);
	// printf("\n%s\n", argv[argc]);
	return (0);
}