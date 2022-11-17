/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:17:53 by znichola          #+#    #+#             */
/*   Updated: 2022/06/30 16:17:46 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_print_map_metadata(t_map_data *d, char *msg)
{	
	if (*msg == '\0')
		ft_putstr(" ~  map  data  ~ \nempty:		");
	else
	{
		ft_putstr(" ~  map  data  ~ \n \"");
		ft_putstr(msg);
		ft_putstr("\"");
	}
	ft_putstr("\nempty:		");
	ft_putchar(d->empty);
	ft_putstr("\nobst:		");
	ft_putchar(d->obst);
	ft_putstr("\nfull:		");
	ft_putchar(d->full);
	ft_putstr("\nl_count:	");
	ft_putnbr(d->line_count);
	ft_putstr("\nl_len	:	");
	ft_putnbr(d->line_len);
	ft_putstr("\nob_count:	");
	ft_putnbr(d->obst_count);
	ft_putstr("\n");
}

void	ft_print_cords(t_cords *c, char *msg)
{	
	if (*msg == '\0')
		ft_putstr("\n~ cords ~\nx	");
	else
	{
		ft_putstr("\n~ cords ~\nx	");
		ft_putstr(msg);
		ft_putstr("\"");
	}
	ft_putstr("\n(x, y):	(");
	ft_putchar(c->x);
	ft_putstr(", ");
	ft_putchar(c->y);
	ft_putstr(")\n");
}

void	ft_print_solution(char *str, t_map_data *m, t_sol *s, t_bool spaced)
{
	int	i;
	int	x;
	int	y;

	ft_set_minus(&i, &x, &y);
	while (*str)
	{
		if (*str == '\n')
			ft_putchar(*str);
		else
		{
			i++;
			x = i % m->line_len;
			y = i / m->line_len;
			if (x >= s->position.x && x < s->position.x + s->size
				&& y >= s->position.y && y < s->position.y + s->size)
				ft_putchar(m->full);
			else
				ft_putchar(*str);
			if (spaced)
				ft_putchar(' ');
		}
		str++;
	}
}
