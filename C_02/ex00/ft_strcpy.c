/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 14:21:41 by znichola          #+#    #+#             */
/*   Updated: 2022/06/12 17:56:22 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
// clear && gcc ft_strcpy.c && ./a.out
int main(void)
{
	void run_test();
	
	run_test(0, 1, 3, ft_strcpy, "ft_strcpy");
	run_test(0, 1, 3, strcpy, "strcpy");
	
	run_test(1, 2, 4, ft_strcpy, "ft_strcpy");
	run_test(1, 2, 4, strcpy, "strcpy");
	
	run_test(2, 10, 7, ft_strcpy, "ft_strcpy");
	run_test(2, 10, 7, strcpy, "strcpy");

	run_test(3, 5, 5, ft_strcpy, "ft_strcpy");
	run_test(3, 5, 5, strcpy, "strcpy");
	
	run_test(4, 0, 6, ft_strcpy, "ft_strcpy");
	run_test(4, 0, 6, strcpy, "strcpy");

	run_test(5, 3, 0, ft_strcpy, "ft_strcpy");
	run_test(5, 3, 0, strcpy, "strcpy");
	// run_test(3, 5, 9);
	// run_test(4, 0, 6);
	// run_test(5, 3, 0);
	return (0);
}

void run_test(int tnum, int d, int s, char *func(char *s1, char *s2), char *name)
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
	printf("original values are:\ndest:	%s\nsrc:	%s\n",  dest, src);
	printf("after %s fuction:\nfnrt:	%s\ndest:	%s\nsrc:	%s\n", 
		name, func(dest, src), dest, src);
	
}
*/