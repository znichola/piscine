/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:35:56 by znichola          #+#    #+#             */
/*   Updated: 2022/06/30 23:40:41 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*list = begin_list;
	int		i = 0;

	while(list != NULL)
	{
		list = list->next;
		i++;
	}
	return (i);
}