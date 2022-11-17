/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 13:55:06 by znichola          #+#    #+#             */
/*   Updated: 2022/06/12 14:08:10 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{	
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str ++;
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	char	str[7] = "Hello!";

	printf("string is < %s > of length %d", str, ft_strlen (str));
}
*/
