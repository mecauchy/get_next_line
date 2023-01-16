/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:03:57 by mecauchy          #+#    #+#             */
/*   Updated: 2023/01/16 16:59:36 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE

#  define BUFFER_SIZE 8

# endif

char	*ft_strchr(char *str, int c);
char	*ft_get_last(char *ret);
char	*ft_strjoin(char *next_str, char *buff);
char	*ft_get_line(char *next_str);
char	*ft_read_to_next_str(int fd, char *next_str);
char	*ft_new_str(char *next_str);
char	*get_next_line(int fd);
char	*ft_strdup(char *s1);
size_t	ft_strlen(char *str);

#endif
