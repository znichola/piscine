/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:32:51 by znichola          #+#    #+#             */
/*   Updated: 2022/06/30 23:23:30 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	solver(int a, int b, int (*f)(int, int))
{
	return ((*f)(a, b));
}

int	ret_op(char *op)
{
	if (*op == '*')
		return (0);
	if (*op == '/')
		return (1);
	if (*op == '+')
		return (2);
	if (*op == '-')
		return (3);
	if (*op == '%')
		return (4);
	return (-1);
}

int	main(int ac, char **av)
{
	void	(*op[5])(int a, int b);

	op[0] = ft_multi;
	op[1] = ft_div;
	op[2] = ft_plus;
	op[3] = ft_minus;
	op[4] = ft_modulo;
	if (ac != 4)
		return (0);
	if (ret_op(av[2]) == -1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	else
	{
		op[ret_op(av[2])](ft_atoi(av[1]), ft_atoi(av[3]));
	}
	return (0);
}
