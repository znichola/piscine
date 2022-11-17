/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 12:47:26 by znichola          #+#    #+#             */
/*   Updated: 2022/06/12 13:23:43 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main(void)
{
	int a, b, div, mod;

	a = 12;
	b = 7;
	div = 0;
	mod = 0;
	
	printf("a=%d / b=%d equals div=%d mod=%d\n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("a=%d / b=%d equals div=%d mod=%d\n", a, b, div, mod);
}
*/
