/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:32:08 by znichola          #+#    #+#             */
/*   Updated: 2022/06/30 17:14:23 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int		i;
	char	*tmp;

	i = 0;
	while (*tab != '\0')
	{
		if ((*f)(*tab) == 0)
			return (1);
		tab++;
	}
	return (0);
}
