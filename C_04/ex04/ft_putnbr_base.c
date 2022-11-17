/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:15:47 by znichola          #+#    #+#             */
/*   Updated: 2022/06/17 12:15:57 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	len(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

int	base_validator(char *str, int i)
{
	int	e;

	if ( len(str) <= 1 || i <= 0)
		return(0);
	e = i;
	while (i--)
	{
		if (str[i] == '-' || str[i] == '+')
			return 0;
		e = i;
		while (e--)
		{
			// printf("i: %d:%c	e: %d:%c\n", i, str[i], e, str[e]);
			if (str[i] == str[e])
				return 0;
		}
	}
	return 1;
}

void	ft_putnbr_base(int nbr, char *base)
{
	
	return ;
}

int main(void)
{
	printf("%d",base_validator("a12def", 6));
}