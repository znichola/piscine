/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:55:13 by znichola          #+#    #+#             */
/*   Updated: 2022/06/15 15:00:10 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
int main(void)
{
	void run_test(); 

	char	*s1	= "ABCDE";
	char	*s2	= "AcCDEfgasd";

	printf("~~ strcmp ~~\ns1:	%s\ns2:	%s\nfnrt:	%d\n", s1, s2, strcmp(s1, s2));
	printf("~~ ft_strmp ~~\ns1:	%s\ns2:	%s\nfnrt:	%d\n", s1, s2, ft_strcmp(s1, s2));

	return (0);
}
*/