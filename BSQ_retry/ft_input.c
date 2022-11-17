/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:32:59 by znichola          #+#    #+#             */
/*   Updated: 2022/06/29 10:58:19 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

/*
input_validatoin -> map_meta_data or NULL if invalid
	check the map gen rules
*/

int	ft_line_count(char *str)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			l++;
		i++;
	}
	return (l);
}

int	ft_line_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	return (i);
}

t_bool	ft_char_validaton(t_map_data *d, char *str)
{
	int	line_len;

	line_len = 0;
	while (*str == d->empty || *str == d->obst || *str == '\n')
	{
		if (*str == '\n')
		{
			if (line_len != d->line_len)
				return (FALSE);
			line_len = 0;
		}
		else
			line_len++;
		str++;
		if (*str == '\0')
			return (TRUE);
	}
	return (FALSE);
}

void	ft_obstacle_count(t_map_data *data, char *str)
{
	while (*str)
	{
		if (*str == data->obst)
			data->obst_count += 1;
		str++;
	}
}

t_bool	ft_input_validation(t_map_data *data, char *str)
{
	if (ft_line_len(str) < 4)
		return (FALSE);
	data->obst_count = 0;
	data->line_count = ft_atoi(str);
	str = str + ft_line_len(str) - 3;
	data->empty = *str;
	data->obst = *(str + 1);
	data->full = *(str + 2);
	str += 4;
	data->line_len = ft_line_len(str);
	if (data->line_len <= 0)
		return (FALSE);
	if (data->line_count != ft_line_count(str))
		return (FALSE);
	ft_obstacle_count(data, str);
	if (!ft_char_validaton(data, str))
		return (FALSE);
	return (TRUE);
}
