/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:37:25 by znichola          #+#    #+#             */
/*   Updated: 2022/06/30 12:02:05 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_in(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	**init_array(char *str)
{
	char	**arr;
	int		l;
	int		i;

	i = 0;
	while (str[i])
		i++;
	l = i;
	arr = (char **)malloc(sizeof(char *) * (l + 1));
	if (!arr)
		return (NULL);
	arr[l-1] = NULL;
	i = 0;
	while (arr[i] == NULL)
	{
		arr[i] = (char *)malloc(sizeof(char) * (l + 1));
		i++;
	}
	return (arr);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		word_count;
	char	**ret;

	ret = init_array(str);
	i = 0;
	word_count = 0;
	while (*str)
	{
		if (ft_is_in(*str, charset) || *str == '\0')
		{
			ret[word_count][i] = '\0';
			if (i != 0)
				word_count++;
			i = 0;
		}
		else
		// {
			ret[word_count][i++] = *str;
			// i++;
		// }
		str++;
	}
	ret[word_count][i] = '\0';
	ret[word_count + 1] = 0;
	return (ret);
}

/*
#include <string.h>
int main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("give me some arguments ya .. \n");
		return (0);
	}
	char *str = av[1];
	char *sep = av[2];
	
	char **foo = ft_split(str, sep);
	// printf("len: %d\n", count_words(*foo, sep));
	printf("tab start\n");
	for (int i = 0; foo[i] != 0; i++)
	{
		printf("tab[%d]: \"%s\"\n", i, foo[i]);
	}
	printf("tab end\n");
	return (0);
	return (0);
}	

// printf("count me:%d\n", count_words(str, sep));
	// printf("%s\n", next_word(str, sep, &end));
	// printf("%s\n", end);
	
	// int *t = make_char_checker("this is my char CHECKER");
	// for (int i = 0; i < 128; i++)
	// {	
	// 	printf("%d, ", t[i]);
	// }
		// printf("what\n");
*/