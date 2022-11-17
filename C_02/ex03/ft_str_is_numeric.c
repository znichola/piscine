/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:36:09 by znichola          #+#    #+#             */
/*   Updated: 2022/06/14 10:36:14 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		str ++;
	}
	return (1);
}

// ...	@	A	...	Z	[	...	`	a	b	...	z	{	...
// ...	64	65	...	90	91	...	96	97	98	...	122	123	...
/*
int main(void)
{
	char	*a = "01293123\0";
	char	*b = "12\n3123hf ?>{e\0";

	printf("a is %d, b is %d\n", ft_str_is_numeric(a), ft_str_is_numeric(b));
}
*/