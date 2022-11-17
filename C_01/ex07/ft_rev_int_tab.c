/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 14:09:44 by znichola          #+#    #+#             */
/*   Updated: 2022/06/12 14:15:25 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include <string.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	while (i <= size / 2)
	{
		t = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = t;
		i ++;
	}
}


int main(void)
{	
	void printarr(int a[], int s);

	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	printarr(arr, 11);
	ft_rev_int_tab(arr, 11);
	printarr(arr, 11);

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
