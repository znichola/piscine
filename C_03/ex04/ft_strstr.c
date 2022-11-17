/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:55:39 by znichola          #+#    #+#             */
/*   Updated: 2022/06/15 16:55:41 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*ts;
	char	*tf;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		ts = str;
		tf = to_find;
		while (*ts == *tf)
		{
			tf++;
			ts++;
			if (*tf == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}

/*
int main(void)
{
	char h[100] = "I need a new haystack, needle is a lost needle in mine. :(";
	char n[] = "needle";
	
	char h1[100];
	char n1[strlen(n)];
	
	strcpy(h1, h);
	strcpy(n1, n);

	printf("h:	%s\nn:	%s\nfnrt:	%s\n", h, n, ft_strstr(h, n));
	printf("h:	%s\nn:	%s\nfnrt:	%s\n", h1, n1, strstr(h, n));

}
*/