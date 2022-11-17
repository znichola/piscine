/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 21:38:57 by znichola          #+#    #+#             */
/*   Updated: 2022/06/29 10:08:23 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int		n;
	char	*end;

	n = 1;
	end = str + ft_line_len(str) - 3;
	if (!ft_is_numeric(*str))
		return (0);
	n = *str - '0';
	str++;
	while (ft_is_numeric(*str) && str < end)
	{
		n = 10 * n + *str - '0';
		str++;
	}
	return (n);
}

/*
int main(void)
{
	char *t =  "   ---+--+1234ab567";
	printf("%d\n", ft_atoi(t));
}
*/