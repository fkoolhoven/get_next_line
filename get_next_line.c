/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felicia <felicia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:15:17 by felicia           #+#    #+#             */
/*   Updated: 2023/04/25 16:16:31 by felicia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*update_buffer(char	*buffer)
{
	int		i;
	int		j;
	char	*updated;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	updated = (char *)ft_calloc(sizeof(char), (ft_strlen(buffer) - i + 1));
	j = 0;
	i++;
	while (buffer[i] && updated)
	{
		updated[j] = buffer[i];
		j++;
		i++;
	}
	free (buffer);
	return (updated);
}

char	*get_line(char *buffer)
{
	int		i;
	char	*get_line;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	get_line = (char *)ft_calloc(sizeof(char), (i + 2));
	if (!get_line)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		get_line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
		get_line[i] = '\n';
	return (get_line);
}

char	*ft_read(char *buffer, int fd)
{
	char	temp_buffer[BUFFER_SIZE + 1];
	int		check_read;

	check_read = 1;
	while (check_read != 0 && !ft_strchr(buffer, '\n'))
	{
		check_read = read(fd, temp_buffer, BUFFER_SIZE);
		if (check_read < 0)
		{
			free(buffer);
			return (NULL);
		}
		temp_buffer[check_read] = '\0';
		buffer = ft_strjoin(buffer, temp_buffer);
		if (buffer == NULL)
			check_read = 0;
	}
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_read(buffer, fd);
	if (buffer == NULL)
		return (NULL);
	line = get_line(buffer);
	buffer = update_buffer(buffer);
	if (line == NULL)
	{
		free (buffer);
		return (NULL);
	}
	return (line);
}
