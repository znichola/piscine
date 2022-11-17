/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:40:55 by znichola          #+#    #+#             */
/*   Updated: 2022/06/23 16:40:56 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
// #include "ft_strs_to_tab.c"
// #include "../ex05/ft_show_tab.c"

int main(int argc, char **argv)
{
	t_stock_str *array;

	array = ft_strs_to_tab(argc-1, argv+1);
	ft_show_tab(array);
	return (0);
}