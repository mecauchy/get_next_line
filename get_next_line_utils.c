/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:22:45 by mecauchy          #+#    #+#             */
/*   Updated: 2023/01/16 13:24:11 by mecauchy         ###   ########.fr       */
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
	return (0);
}

char	*ft_strjoin(char *next_str, char *buff)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (!next_str)
		return (ft_strdup(buff));
	str = (char *)malloc(sizeof(char *) * (ft_strlen(next_str) + ft_strlen(buff) + 1));
	if (!str)
		return (NULL);
	while (next_str[i])
	{
		str[j] = next_str[i];
		i++;
		j++;
	}
	i = 0;
	while (buff[i])
	{
		str[j] = buff[i];
		i++;
		j++;
	}
	free(next_str);
	return (str);
}
