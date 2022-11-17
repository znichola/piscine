/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:42:07 by znichola          #+#    #+#             */
/*   Updated: 2022/06/30 16:14:36 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_skip_line(char *str)
{
	while (*str != '\n')
		str++;
	str++;
	return (str);
}

int	ft_start_size(t_map_data *md)
{
	if (md->line_len < md->line_count)
		return (md->line_len);
	else
		return (md->line_count);
}

char	*ft_foo(t_map_data *md, char *path, t_bool std_in, char **board_str)
{
	char	*board_str_p;

	board_str_p = ft_read_board(path, std_in);
	if (board_str_p == NULL)
		return (NULL);
	*board_str = board_str_p;
	if (!ft_input_validation(md, *board_str))
		return (NULL);
	*board_str = ft_skip_line(*board_str);
	return (board_str_p);
}

t_bool	ft_solve_board(char *path, t_bool std_in)
{
	char		*board_str_p;
	char		*board_str;
	t_map_data	md[1];
	t_cords		*obstacles;
	t_sol		solution[1];

	board_str_p = ft_foo(md, path, std_in, &board_str);
	if (board_str_p == NULL)
		return (FALSE);
	if (ft_check_full(board_str_p, board_str, md, solution))
		return (TRUE);
	obstacles = ft_init_obstacles(*md, board_str);
	if (obstacles == NULL)
		return (FALSE);
	if (!ft_solve(*md, obstacles, ft_start_size(md), solution))
	{
		ft_free(board_str_p, obstacles);
		return (FALSE);
	}	
	ft_print_solution(board_str, md, solution, FALSE);
	ft_free(board_str_p, obstacles);
	return (TRUE);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 1)
	{
		if (!ft_solve_board(av[0], TRUE))
			ft_puterr(MAP_ERROR, 1);
	}
	else if (ac == 2)
	{
		if (!ft_solve_board(av[1], FALSE))
			ft_puterr(MAP_ERROR, 1);
	}
	else
	{
		i = 1;
		while (i < ac)
		{
			if (!ft_solve_board(av[i], FALSE))
				ft_puterr(MAP_ERROR, 1);
			if (i < ac -1)
				ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
