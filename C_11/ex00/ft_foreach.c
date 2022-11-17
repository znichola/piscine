/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:10:57 by znichola          #+#    #+#             */
/*   Updated: 2022/06/30 17:13:55 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

/*
void	ft_putnbr(int n)
{
	char w;

	if (n < 10)
	{
		w = n + '0';
		write(1, &w, 1);
		return ;
	}
	ft_putnbr(n/10);
	ft_putnbr(n%10);
}

int main(int ac, char **av)
{
	int a = ac-1;
	// char *v = *(av+1);
	int arr[a];
	for (int i = 0; i < a; i++)
		arr[i] = atoi(av[i+1]);
	printf("nums given: ");
	for (int i = 0; i < a; i++)
	{
		ft_putnbr(arr[i]);
		write(1, " ", 1);
		// printf("%d ", arr[i]);
	}
	printf("\n");

	ft_foreach(arr, a, &ft_putnbr);
	ft_foreach(arr, a, &printf);
}
*/