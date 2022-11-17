/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:37:47 by znichola          #+#    #+#             */
/*   Updated: 2022/06/14 10:38:06 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
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
	char	*a = "thisisavalidestring\0";
	char	*b = "THIS IS not valid?!\0";

	printf("a is %d, b is %d\n", ft_str_is_lowercase(a), ft_str_is_lowercase(b));
}
*/