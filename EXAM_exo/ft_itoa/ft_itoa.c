/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:42:44 by znichola          #+#    #+#             */
/*   Updated: 2022/07/01 00:11:00 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char* rec_itoa(int n, char *s)
{
	if (n < 0)
	{
		n = -n;
		*s = '-';
		s++;
	}
	if ((n/10) == 0)
	{
		*s = n+'0';
		s++;
		*s = '\0';
	}
	else
	{
		s = rec_itoa(n/10, s);
		*s = (n%10) + '0';
		s++;
		*s = '\0';
	}
	return (s);
}

// char *rec_itoa(int n, char *s)
// {
// 	char *dest = s;
// 	if (n < 0)
// 	{
// 		n *= -1;
// 		*dest++ = '-';
// 	}
// 	if (n / 10 != 0)
// 		dest = rec_itoa(n/10, dest);
// 	*dest++ = n%10 + '0';
// 	printf("%s\n", s);
// 	*dest = '\0';
// 	return (dest);
// }

// char	*ft_itoa(int nbr)
// {
// 	if (nbr == -2147483648)
// 		return ("-2147483648\0");
	
// }

#include <stdlib.h>

int	main (int ac, char **av)
{
	char str[10000];
	printf("here: %s\n", rec_itoa(atoi(av[1]), str));
	printf("alos: %s\n", str);
}