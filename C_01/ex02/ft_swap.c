/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:56:00 by znichola          #+#    #+#             */
/*   Updated: 2022/06/12 13:23:18 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

/*
int main(void)
{
	int a;
	int b;

	a = 13;
	b = 89;
	
	printf("before func: a=%d,b=%d\n", a, b);
	ft_swap(&a, &b);
	printf("after  func: a=%d,b=%d\n", a, b);
	
	return(0);
}
*/
