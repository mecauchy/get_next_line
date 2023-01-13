/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:22:45 by mecauchy          #+#    #+#             */
/*   Updated: 2023/01/11 12:36:32 by mecauchy         ###   ########.fr       */
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

char	*ft_get_last(char *ret)
{
	int	i;

	i = 0;
	while (ret[i])
	{
		i++;
	}
	return (&ret[i]);
}

char	*ft_strjoin(char *next_str, char *buff, int rd_bytes)
{
	int		i;
	char	*str;
	char	*ret;

	ret = 0;
	str = malloc(sizeof(char *) * (rd_bytes + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (buff[i] && i < rd_bytes && next_str[i])
	{
		ret = &buff[i];
		i++;
	}
	ret[i] = '\n';
	str = ft_get_last(ret);
	return (str);
}
