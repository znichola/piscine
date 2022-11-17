/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 22:18:43 by znichola          #+#    #+#             */
/*   Updated: 2022/06/30 23:23:40 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_str_len(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		flag;
	char	*t;

	flag = 1;
	while (flag)
	{
		flag = 0;
		i = 0;
		while (tab[i + 1] != NULL)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				t = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = t;
				flag = 1;
			}
			i++;
		}
	}
}

/*
int	main(int ac, char **av)
{
	(void)ac;
	ft_sort_string_tab(av + 1);
	for (int i = 1; av[i] != 0; i++)
		printf("%s\n", av[i]);
	return (0);
}
*/