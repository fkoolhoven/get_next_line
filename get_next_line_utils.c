/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felicia <felicia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:15:42 by felicia           #+#    #+#             */
/*   Updated: 2023/04/25 16:16:52 by felicia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	int	strlen;

	strlen = 0;
	while (str[strlen])
		strlen++;
	return (strlen);
}

char	*ft_strchr(char *str, int c)
{
	if (!str)
		return (0);
	while (*str != '\0' && *str != c)
	{
		str++;
	}
	if (*str == c)
		return (str);
	return (0);
}

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*array;
	size_t			i;
	size_t			total;

	total = count * size;
	array = malloc(total);
	if (!array)
		return (NULL);
	i = 0;
	while (i < total)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char		*str;
	size_t		i;

	if (!s1)
		s1 = (char *)ft_calloc(sizeof(char), 1);
	if (!s1 || !s2)
		return (NULL);
	str = (char *)ft_calloc(sizeof(char), (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		str[i] = *s2;
		i++;
		s2++;
	}
	free(s1);
	return (str);
}
