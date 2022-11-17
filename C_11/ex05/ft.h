/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:49:51 by znichola          #+#    #+#             */
/*   Updated: 2022/06/30 23:22:31 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

void	ft_multi(int a, int b);
void	ft_div(int a, int b);
void	ft_plus(int a, int b);
void	ft_minus(int a, int b);
void	ft_modulo(int a, int b);
void	ft_putsrt(char *str);
void	write_digit(int n);
void	ft_putnbr(int nb);
int		is_numeric(char c);
int		ft_atoi(char *str);

#endif