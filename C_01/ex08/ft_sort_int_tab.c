/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:28:48 by znichola          #+#    #+#             */
/*   Updated: 2022/06/13 16:34:38 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	f;
	int	t;

	f = 1;
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			t = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = t;
			f = 0;
		}
		i ++;
	}	
	if (f == 1)
	{
		return ;
	}
	ft_sort_int_tab(tab, size);
}

/*
int main(void)
{
	void printarr(int a[], int s);

	int arr[] = {9, 1, 5, 3, 4, 5, 6, 7, 0, 0};

	printarr(arr, 10);
	ft_sort_int_tab(arr, 10);
	printarr(arr, 10);
	return (0);
}

void printarr(int a[], int s)
{
	printf("[");
	for (int i = 0; i < s; i++)
	{
		printf("%d", a[i]);
		if (i < s-1)
		{
			printf(", ");
		}
	}
	printf("]\n");
}
*/