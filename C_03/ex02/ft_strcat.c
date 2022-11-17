/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:13:10 by znichola          #+#    #+#             */
/*   Updated: 2022/06/15 16:19:29 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*r;

	r = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (r);
}

/*
int main(void)
{
	char s1[100]	= "I want something like .. ";
	char s2[]		= "this.";
	char g1[100];
	char g2[strlen(s2)];

	strcpy(g1, s1);
	strcpy(g2, s2);

	printf("%s$\n", ft_strcat(s1, s2));
	printf("%s$\n", strcat(g1, g2));
}
*/