/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 11:06:59 by znichola          #+#    #+#             */
/*   Updated: 2022/06/30 13:27:43 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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

char	*next_word(char *str, char *sep, char **end)
{
	char	*word_start;
	char	*word;
	int		i;

	while (ft_is_in(*str, sep))
		str++;
	word_start = str;
	while (!ft_is_in(*str, sep) && *str != '\0')
		str++;
	*end = str;
	word = (char *)malloc(sizeof(char) * (*end - word_start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (&word_start[i] < *end)
	{
		word[i] = word_start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int	count_words(char *str, char *sep)
{
	int		count;
	int		flag;
	int		old_flag;

	flag = -1;
	count = 0;
	while (*str)
	{
		old_flag = flag;
		if (ft_is_in(*str, sep))
			flag = 0;
		else
			flag = 1;
		if (old_flag != flag && flag == 1)
			count++;
		str++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**banana;
	char	*end;
	int		word_count;
	int		i;

	word_count = count_words(str, charset);
	banana = (char **)malloc(sizeof(banana) * (word_count + 5));
	if (!banana)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		banana[i] = next_word(str, charset, &end);
		str = end;
		i++;
	}
	banana[i] = NULL;
	return (banana);
}

/*
#include <string.h>
int main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("give me some arguments you piece \n");
		return (0);
	}
	char *end;
	char *str = av[1];
	char *sep = av[2];
	// (void)end;
	printf("count me:%d\n", count_words(str, sep));
	printf("next:	\"%s\"\n", next_word(str, sep, &end));
	printf("end:	\"%s\"\n", end);

	char **foo = ft_split(str, sep);
	// printf("len: %d\n", count_words(*foo, sep));
	printf("tab start\n");
	for (int i = 0; foo[i] != 0; i++)
	{
		printf("tab[%d]: \"%s\"\n", i, foo[i]);
	}
	printf("tab end\n");
	return (0);
}
*/