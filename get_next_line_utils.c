/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:22:45 by mecauchy          #+#    #+#             */
/*   Updated: 2023/01/16 17:39:54 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s1)
{
	char	*ret;
	int		i;

	i = 0;
	ret = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!ret)
		return (NULL);
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	return (ret);
}

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

// char	*ft_strjoin(char **ptr_str, char *buff)
// {
// 	int		i;
// 	int		j;
// 	char	*str;
// 	char	*next_str;

// 	i = 0;
// 	j = 0;
// 	next_str = *ptr_str;
// 	if (!next_str)
// 		return (ft_strdup(buff));
// 	str = (char *)calloc(ft_strlen(next_str) + ft_strlen(buff) + 1, sizeof(char *));
// 	if (!str)
// 		return (NULL);
// 	while (next_str[i])
// 	{
// 		str[j] = next_str[i];
// 		i++;
// 		j++;
// 	}
// 	i = 0;
// 	while (buff[i])
// 	{
// 		str[j] = buff[i];
// 		i++;
// 		j++;
// 	}
// 	free(ptr_str);
// 	return (str);
// }

char	*ft_strjoin(char *next_str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!next_str)
	{
		next_str = (char *)malloc(1 * sizeof(char));
		next_str[0] = '\0';
	}
	if (!next_str || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(next_str) + ft_strlen(buff)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (next_str)
		while (next_str[i])
		{
			str[i] = next_str[i + 1];
			i++;
		}
	while (buff[j] != '\0')
	{
		str[i] = buff[j];
		i++;
		j++;
	}
	str[ft_strlen(next_str) + ft_strlen(buff)] = '\0';
	free(next_str);
	return (str);
}