/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:53:47 by znichola          #+#    #+#             */
/*   Updated: 2022/06/16 15:05:05 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	char	*t;

	t = str;
	while (*str != '\0')
		str++;
	return (str - t);
}

/*
int main(int argc, char **argv)
{
	for (int i = 0; i < argc; i++)
	{
		printf("lib: %lu	my: %d		%s\n", 
				strlen(argv[i]), ft_strlen(argv[i]), argv[i]);
	}
}
*/
