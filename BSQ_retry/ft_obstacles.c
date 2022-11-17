/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_obstacles.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graux <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:24:36 by graux             #+#    #+#             */
/*   Updated: 2022/06/27 16:53:02 by graux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_print_obstacle(int obstacle_num, t_cords obstacle)
{
	ft_putstr("Obstacle: ");
	ft_putnbr(obstacle_num);
	ft_putstr("\nx: ");
	ft_putnbr(obstacle.x);
	ft_putstr("\ny: ");
	ft_putnbr(obstacle.y);
	ft_putstr("\n");
}

void	ft_show_obstacles(t_map_data meta_data, t_cords *obstacles)
{
	int	i;

	i = 0;
	while (i < meta_data.obst_count)
	{
		ft_print_obstacle(i, obstacles[i]);
		i++;
	}
}

t_cords	*ft_init_obstacles(t_map_data meta_data, char *board)
{
	t_cords	*obstacles;
	int		i;
	int		j;

	obstacles = malloc(meta_data.obst_count * sizeof(t_cords));
	if (obstacles == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (*board != '\0')
	{
		if (*board == meta_data.obst)
		{
			obstacles[j].x = i % meta_data.line_len;
			obstacles[j].y = i / meta_data.line_len;
			j++;
		}
		if (*board != '\n')
			i++;
		board++;
	}
	return (obstacles);
}
