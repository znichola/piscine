/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parcing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 08:41:38 by znichola          #+#    #+#             */
/*   Updated: 2022/06/18 12:31:33 by dibanez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* only for dealing with the input string,
 * nothing is printed to the screen.
*/

#include <stdio.h>

int		ft_ch_is_numeric(char c);
int		check_size(int *num);
void	ft_putarray(int *a, int len);
void	ft_putstr(char *str);

	// validation of input syntax - space-separated digits
int	input_str_val(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (i % 2 != 1 && ft_ch_is_numeric(str[i]) == 1)
			j++;
		else if (i % 2 == 1 && str[i] == 32)
			j++;
		i++;
	}
	if (j == i && ft_ch_is_numeric(str[i - 1]) == 1)
		return (1);
	else
		return (0);
}

	// max possible numbers for a 9*9 grid is 9*4=36
	// static is needed because when the function scope ends
	// n is freed from memory and no longer points to anything.
int	*input_parcing(char *str)
{
	static int	n[36];
	int			i;

	i = 0;
	while (*str != '\0')
	{
		if (ft_ch_is_numeric(*str))
		{
			n[i] = (int) *str - '0';
			i++;
		}
		str++;
	}
	return (n);
}

	// validate the shape of the numbers
	// ft_putarray(num, 36);
int	input_num_val(int *num)
{
	int	size;

	size = check_size(num);
	if (size == 0)
		return (0);
	while (*num)
	{
		if (*num > size && *num <= 0)
			return (0);
		num++;
	}
	return (1);
}

void	ft_error(char *message)
{
	if (*message == '\0')
		ft_putstr("Error\n");
	ft_putstr(message);
	ft_putstr(" :Error\n");
}

int	intput_val(int argc, char *argv, int *num)
{
	int	f;

	f = 0;
	if (argc != 2 && input_str_val(argv) && input_num_val(num))
		f = 1;
	if (f)
		ft_error("");
	return (f);
}
