/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:00:42 by graux             #+#    #+#             */
/*   Updated: 2022/06/30 16:17:41 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

t_cords	*ft_create_cords(int x, int y, t_cords *cords)
{
	cords->x = x;
	cords->y = y;
	return (cords);
}

t_bool	ft_solve(t_map_data md, t_cords *obs, int size, t_sol *sol)
{
	int		i;
	int		x;
	int		y;
	t_cords	start[1];

	if (size == 0)
		return (FALSE);
	ft_set_minus(&i, &x, &y);
	while ((x + size) <= md.line_len || (y + size) <= md.line_count)
	{
		i++;
		x = i % md.line_len;
		y = i / md.line_len;
		ft_create_cords(x, y, start);
		if (ft_check_square(*start, size, obs, md.obst_count)
			&& x + size <= md.line_len && y + size <= md.line_count)
		{
			sol->position.x = start->x;
			sol->position.y = start->y;
			sol->size = size;
			return (TRUE);
		}
	}
	return (ft_solve(md, obs, size - 1, sol));
}

void	ft_set_minus(int *a, int *b, int *c)
{
	*a = -1;
	*b = -1;
	*c = -1;
}

t_bool	ft_check_full(char *b_p, char *b_s, t_map_data *md, t_sol *solution)
{
	if (md[0].obst_count == md[0].line_len * md[0].line_count)
	{
		free(b_p);
		ft_print_solution(b_s, md, solution, FALSE);
		return (TRUE);
	}
	return (FALSE);
}

void	ft_free(char *b_p, t_cords *obst)
{
	free(b_p);
	free(obst);
}
