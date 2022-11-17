/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:41:44 by znichola          #+#    #+#             */
/*   Updated: 2022/06/14 10:42:10 by znichola         ###   ########.fr       */
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

int	is_alpha(char c)
{
	if (!(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z'))
	{
		return (0);
	}
	return (1);
}

int	is_numeric(char c)
{
	if (!(c >= '0' && c <= '9'))
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	char	*r;
	char	t;

	r = str;
	ft_strlowcase(str);
	if (is_alpha(*str))
		*str -= 32;
	t = *str;
	str ++;
	while (*str != '\0')
	{
		if (is_alpha(*str) && !is_numeric(t) && !is_alpha(t))
		{
			*str -= 32;
		}
		t = *str;
		str ++;
	}
	return (r);
}

// ...	@	A	...	Z	[	...	`	a	b	...	z	{	...
// ...	64	65	...	90	91	...	96	97	98	...	122	123	...
/*
int	main(void)
{
	char	a[] = "salut, coMment tu vas ? 42mots quarante-Deux; Cinquante+et+un";

	printf("original a:	%s\n", a);
	printf("cap return:	%s\n", ft_strcapitalize(a));
	return(0);
}
*/