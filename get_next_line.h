/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkoolhov <fkoolhov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:16:32 by cyuzbas           #+#    #+#             */
/*   Updated: 2023/04/24 19:07:30 by fkoolhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>




        #include <stdio.h>

char	*get_next_line(int fd);
char	*ft_read(char *container, int fd);
char	*get_line(char *container);
char	*update_container(char	*container);
size_t	ft_strlen(char *str);
char	*ft_strchr(char *s, int c);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin(char *s1, char *s2);

#endif