/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:51:18 by graux             #+#    #+#             */
/*   Updated: 2022/06/28 17:03:49 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_file_content(char *buffer, int buff_size, char *path, t_bool std_in)
{
	int		fd;
	int		bytes_read;

	if (!std_in)
		fd = open(path, O_RDONLY);
	else
		fd = 0;
	if (fd == -1)
		return (-1);
	bytes_read = read(fd, buffer, buff_size);
	if (bytes_read == -1)
		return (-1);
	if (close(fd) != 0)
		return (-1);
	return (bytes_read);
}

char	*ft_read_board(char *path, t_bool std_in)
{
	char	*buffer;
	int		buff_size;
	int		bytes_read;

	buff_size = 1000000;
	bytes_read = 1000000;
	while (bytes_read == buff_size)
	{
		buffer = malloc((buff_size + 1) * sizeof(char));
		if (buffer == NULL)
			return (NULL);
		bytes_read = ft_file_content(buffer, buff_size, path, std_in);
		if (bytes_read == -1)
			return (NULL);
		else if (bytes_read == buff_size)
		{
			buff_size *= 2;
			bytes_read = buff_size;
			free(buffer);
		}
		else
			buffer[bytes_read] = '\0';
	}
	return (buffer);
}
