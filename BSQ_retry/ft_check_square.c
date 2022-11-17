/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:52:14 by graux             #+#    #+#             */
/*   Updated: 2022/06/28 11:37:13 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

t_bool	ft_check_square(t_cords start, int size, t_cords *obs, int obstc)
{
	int	i;

	i = 0;
	size--;
	while (i < obstc)
	{
		if (obs[i].x >= start.x && obs[i].y >= start.y
			&& obs[i].x <= start.x + size
			&& obs[i].y <= start.y + size)
			return (FALSE);
		i++;
	}
	return (TRUE);
}
