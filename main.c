/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:28:06 by mecauchy          #+#    #+#             */
/*   Updated: 2023/01/13 19:25:45 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int ac, char **av)
{
	char	*line;
	int		fd;

	fd = open(av[1], O_RDONLY);
	do
	{
		line = get_next_line(fd);
		if (line)
			printf("%s", line);
		free(line);
	} while (line);
	free(line);
	close(fd);
	return (0);
}
