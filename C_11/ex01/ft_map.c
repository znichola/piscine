/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 00:23:06 by znichola          #+#    #+#             */
/*   Updated: 2022/06/30 20:31:30 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*ret;
	int	i;

	i = 0;
	ret = (int *)malloc(sizeof(int) * length);
	if (!ret)
		return (NULL);
	while (i < length)
	{
		ret[i] = (*f)(tab[i]);
		i++;
	}
	return (ret);
}

/*
int	plus1(int n)
{
	return (n + 1);
}

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
	int *ret = ft_map(arr, a, &plus1);
	
	printf("nums given: ");
	for (int i = 0; i < a; i++)
	{
		// ft_putnbr(arr[i]);
		// write(1, " ", 1);
		printf("%d ", ret[i]);
	}
	printf("\n");
}
*/