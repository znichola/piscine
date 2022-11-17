/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:39:45 by znichola          #+#    #+#             */
/*   Updated: 2022/06/14 10:40:07 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*t;

	t = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str ++;
	}
	return (t);
}

// ...	@	A	...	Z	[	...	`	a	b	...	z	{	...
// ...	64	65	...	90	91	...	96	97	98	...	122	123	...
/*
int main(void)
{
	char	a[] = "this is SOME sort of # %^ wired striG?!\0";

	printf("original a:	%s\n", a);
	printf("func return:	%s\nnew a:		%s\n", ft_strupcase(a), a);
}
*/