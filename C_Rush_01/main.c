/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 08:26:38 by znichola          #+#    #+#             */
/*   Updated: 2022/06/18 12:05:33 by dibanez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*input_parcing(char *str);
int		intput_val(int argc, char *argv, int *num);
void	ft_printarraynumbers(int size, int tab[size][size], int *num);
void	ft_print_solution(int size, int tab[size][size]);
int		solver(int size, int tab[size][size], int row, int col);

/* our data struture!

   4 3 2 1
 4         1
 3         2
 2         2
 1         2
   1 2 2 2

the whole puzzel is stored in the tab array
row 0 and 5 are the top/bottom inputs
col 0 and 5 are the left/right inputs

run the input validation tests with sh input.sh 

solver (takes the last checked square, last used numer) 
	
	if find_next_empty == 0 	so it's been filled with numbers
		if !check_square		dosn't equal 1 recursivly go again
			return solved
		else 
			solver(c, r) 		this is the recursive bit, a we only exit with a valid solution
	else
		undo the last number
		put a num in it

something like this, but it's too late for this..
*/

int	main(int argc, char **argv)
{
	int	*num;
	int	s_total;
	int	tab[6][6];

	s_total = 6;
	num = input_parcing(argv[1]);
	if (intput_val(argc, argv[1], num))
		return (0);
	ft_printarraynumbers(s_total, tab, num);
	if (solver(s_total, tab, 1, 1))
		ft_print_solution(s_total, tab);
	return (0);
}
