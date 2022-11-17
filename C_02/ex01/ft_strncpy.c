/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcnpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 14:21:41 by znichola          #+#    #+#             */
/*   Updated: 2022/06/12 18:17:27 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int main(void)
{
	void run_test();

	char	nine[]	= "nnnnnnnnn";
	char	eight[] = "eeeeeeee";
	printf("~ strlcpy function ~\norigi vals are:\nn:	%d\ndest:	%s\nsrc:	%s\n\n", 
	5, nine, eight);
	printf("fn rtn:	%s\ndest:	%s\nsrc:	%s\n", strncpy(eight, nine, 5), eight, nine);
	run_test(0, 8, 9, 5);

	// run_test(0, 1, 3, 2);
	// run_test(1, 2, 4, 3);
	// run_test(2, 10, 7, 2);
	// run_test(3, 5, 9, 2);
	// run_test(4, 0, 6, 3);
	// run_test(5, 3, 0, 3);
	return (0);
}

void run_test(int tnum, int d, int s, int n)
{
	char	ten[] 	= "tttttttttt"; 
	char	nine[]	= "nnnnnnnnn";
	char	eight[] = "eeeeeeee";
	char	seven[]	= "vvvvvvv";
	char	six[] 	= "ssssss";
	char	five[] 	= "iiiii";
	char	four[] 	= "ffff";
	char	three[] = "hhh";
	char	two[]	= "ww";
	char	one[] 	= "o";
	char	zero[1]	= "\0";

	char *l[] = {zero, one, two, three, four, five, six, seven, eight, nine, ten};

	char *dest = l[d];
	char *src = l[s];

	printf("\n~~~ test %d ~~~\n", tnum);
	printf("original values are:\nn:	%d\ndest:	%s\nsrc:	%s\n", n, dest, src);
	printf("after strcpy fuction:\nfnrt:	%s\ndest:	%s\nsrc:	%s\n", 
		ft_strncpy(dest, src, n), dest, src);
}
*/