/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:59:50 by znichola          #+#    #+#             */
/*   Updated: 2022/06/15 16:01:39 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}

/*
int main(void)
{
	char	s1[10]	= "dddddd";
	char	s2[11]	= "dddddfdd";
	int		n = 7;

	printf("~~ strcmp ~~\ns1:	%s\ns2:	%s\nfnrt:	%d\n", 
						s1, s2, strncmp(s1, s2, n));
	printf("~~ ft_strcmp ~~\ns1:	%s\ns2:	%s\nfnrt:	%d\n", 
						s1, s2, ft_strncmp(s1, s2, n));
	return (0);
}
*/