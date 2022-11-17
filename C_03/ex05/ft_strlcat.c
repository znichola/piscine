/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:00:23 by znichola          #+#    #+#             */
/*   Updated: 2022/06/15 18:00:25 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char	*td;

	td = dest;
	if (size < len(dest))
		return (len(src) + size);
	while (*dest != '\0')
	{
		dest++;
		size--;
	}
	while (*src != '\0' && size > 1)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*dest = '\0';
	while (*src != '\0' )
	{
		src++;
		dest++;
	}
	return ((unsigned int)(dest - td));
}

/*
void test(char *s1, char *s2, int n);

int main(void)
{

	char s1[100]	= "we need to concact this with \0"; // 29
	char s2[100]	= "something_like_this\0"; // 19 	s1+s2=48

	int n = strlen(s1)+strlen(s2) - 22;
	// test(s1, "", n);

	// printf("%d\n", n);
	char g1[strlen(s1)];
	char g2[strlen(s2)];

	strcpy(g1, s1);
	strcpy(g2, s2);

	printf("~~ strlcat ~~\nprefunc\ns1:	%s\ns2:	%s\n", s1, s2);
	printf("pstfunc\ns1:	%s\ns2:	%s\nfnrt:	%lu\n",
		s1, s2, strlcat(s1, s2, n));

	printf("~~ ft_strlcat ~~\nprefunc\ns1:	%s\ns2:	%s\n", g1, g2);
	printf("pstfunc\ns1:	%s\ns2:	%s\nfnrt:	%u\n",
		g1, g2, ft_strlcat(g1, g2, n));

}

void test(char *s1, char *s2, int n)
{
	char g1[strlen(s1)];
	char g2[strlen(s2)];

	strcpy(g1, s1);
	strcpy(g2, s2);

	printf("~~ strlcat ~~\nprefunc\ns1:	%s\ns2:	%s\n", s1, s2);
	printf("pstfunc\ns1:	%s\ns2:	%s\nfnrt:	%lu\n",
		s1, s2, strlcat(s1, s2, strlen(s1)+strlen(s2) + n));

	printf("~~ ft_strlcat ~~\nprefunc\ns1:	%s\ns2:	%s\n", g1, g2);
	printf("pstfunc\ns1:	%s\ns2:	%s\nfnrt:	%u\n",
		g1, g2, ft_strlcat(g1, g2, strlen(g1)+strlen(g2) + n));
}
*/