/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:42:31 by znichola          #+#    #+#             */
/*   Updated: 2022/06/14 10:43:08 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
int main(void)
{
	void run_test();

	int	n = 24;
	char	s1[] = "vg9yub3lo88a1rwxni5tjkfe";
	char	s2[] = "test_str_this_";
	
	char	g1[] = "vg9yub3lo88a1rwxni5tjkfe";
	char	g2[] = "test_str_this_";

	printf("strlcpy\noriginal values are:\nn:	%d\ndest:	%s\nsrc:	%s\n\n", 
	5, s1, s2);
	printf("fn rtn:	%lu\ndest:	%s\nsrc:	%s\n\n", 
	strlcpy(s1, s2, n), s1, s2);
	
	printf("ft_strlcpy\noriginal values are:\nn:	%d\ndest:	%s\nsrc:	%s\n\n", 
	5, g1, g2);
	printf("fn rtn:	%u\ndest:	%s\nsrc:	%s\n", 
	ft_strlcpy(g1, g2, n), g1, g2);
	
	// run_test(0, 8, 9, 5);
	// run_test(0, 1, 3, 2);
	// run_test(1, 2, 4, 3);
	// run_test(2, 10, 7, 2);
	// run_test(3, 5, 9, 5);
	// run_test(4, 0, 6, 3);
	// run_test(5, 3, 0, 3);
	return (0);
}

void run_test(int tnum, int d, int s, unsigned int n)
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
	printf("original values are:\nn:	%d\ndest:	%s\nsrc:	%s\n\n", 
		n, dest, src);
	printf("after ft_strlcpy fuction:\nfnrt:	%u\ndest:	%s\nsrc:	%s\n", 
		ft_strlcpy(dest, src, n), dest, src);
}
*/