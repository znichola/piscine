/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:49:06 by znichola          #+#    #+#             */
/*   Updated: 2022/06/15 16:49:09 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*r;

	r = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && nb > 0)
	{
		*dest = *src;
		src++;
		dest++;
		nb--;
	}
	*dest = '\0';
	return (r);
}

/*
int main(void)
{
	int n = 0;
	char s1[100]	= "I want something like .. ";
	char s2[]		= "this.";
	char g1[100];
	char g2[strlen(s2)];

	strcpy(g1, s1);
	strcpy(g2, s2);

	printf("%s$\n", ft_strncat(s1, s2, n));
	printf("%s$\n", strncat(g1, g2, n));
}
*/