/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:28:02 by znichola          #+#    #+#             */
/*   Updated: 2022/06/29 14:12:47 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	make_char_checker(char *str)
{
	int	i;
	int	arr[128];
	i = 0;
	while (i < 128)
	{
		arr[i] = 0;
		i++;
	}
	while (*str)
	{
		if (arr[(int)*str] == 0)
			arr[(int)*str] = 1;
		str++;
	}
	return (arr);
}

char	**init_array(*str)
{
	char	**arr;
	char	*s;
	int		l;
	int		i;

	i = 0;
	while (str[i])
		i++;
	l = i;
	arr = (char **)malloc(sizeof(char *) * (l + 1));
	if (!arr)
		return (NULL);
	arr[l-1] = '\0';
	i = 0;
	while (arr[i])
	{
		arr[i] = (char *)malloc(sizeof(char) * (l + 1));
		i++;
	}
	return (arr);
}

char	**ft_split(char *str, char *charset)
{
	int		*seps;
	int		flag;
	int		old_flag;
	char	**ret;
	
	ret = init_array(str);
	sep = make_char_checker(charset);
	flag = 0;
	while (*str != '\0')
	{
		old_flag = flag;
		if (sep[(int)*str])
			flag = 1;
		else 
			flag = 0;
		if (flag != old_flag && flag == 0)
		{
			
		}
		ret++;
		str++;
	}
}