/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:23:43 by znichola          #+#    #+#             */
/*   Updated: 2022/06/09 14:55:45 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}	
	else
	{
		write(1, "N", 1);
	}
}

/*
int	main(void)
{
	ft_is_negative(23);
	ft_is_negative(0);
	ft_is_negative(-1);
}
*/
