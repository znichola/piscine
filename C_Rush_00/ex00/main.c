/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 11:45:46 by znichola          #+#    #+#             */
/*   Updated: 2022/06/11 17:13:16 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// gcc -Wall -Wextra -Werror  main.c rush00.c ft_putchar.c && ./a.out
void	rush(int x, int y);

int	main(void)
{
	write(1, "test 0 \n", 8);
	rush(5, 3);
	write(1, "test 1 \n", 8);
	rush(5, 1);
	write(1, "test 2 \n", 8);
	rush(1, 1);
	write(1, "test 3 \n", 8);
	rush(1, 5);
	write(1, "test 4 \n", 8);
	rush(4, 4);
	write(1, "test 5 \n", 8);
	rush(30, 30);
	return (0);
}
