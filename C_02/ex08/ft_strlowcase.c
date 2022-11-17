/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:40:40 by znichola          #+#    #+#             */
/*   Updated: 2022/06/14 10:41:06 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*t;

	t = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
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
	char	a[] = "salut, coMment tu vas ? 42mots quarante-Deux; Cinquante+et+un";

	printf("original a:	%s\n", a);
	printf("func return:	%s\nnew a:		%s\n", ft_strlowcase(a), a);
}
*/