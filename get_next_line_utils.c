/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:22:45 by mecauchy          #+#    #+#             */
/*   Updated: 2023/01/18 17:35:53 by mecauchy         ###   ########.fr       */
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

char	*ft_strjoin(char *next_str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!next_str)
	{
		next_str = (char *)malloc(sizeof(char));
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
		while (next_str[++i])
			str[i] = next_str[i];
	while (buff[j])
		str[i++] = buff[j++];
	str[ft_strlen(next_str) + ft_strlen(buff)] = '\0';
	free(next_str);
	return (str);
}
