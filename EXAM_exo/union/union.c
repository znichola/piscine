/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 23:12:30 by znichola          #+#    #+#             */
/*   Updated: 2022/06/29 00:44:15 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 1;
	int arr[128];
	char *str;
	
	if (ac != 3)
		return (0);
	i = 0;
	while (i < 128)
	{
		arr[i] = 1;
		i++;
	}
	i = 1;
	while (i < ac)
	{
		str = av[i];
		while (*str != '\0')
		{
			if (arr[(int)*str] == 1)
			{
				arr[(int)*str] = 0;
				write(1, str, 1);
			}
			str++;
		}
		i++;
	}
}