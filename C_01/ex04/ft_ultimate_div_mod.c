/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 13:07:13 by znichola          #+#    #+#             */
/*   Updated: 2022/06/12 13:21:41 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t;

	t = *a;
	*a = t / *b;
	*b = t % *b;
}

/*
int main(void)
{
	int a, b;
	
	a = 14;
	b = 9;
	printf("a=%d b=%d  >>  ", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a/b = %d, a%%b = %d\n", a, b);

}
*/
