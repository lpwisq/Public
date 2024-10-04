/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:42:50 by lpwi              #+#    #+#             */
/*   Updated: 2024/09/28 13:15:59 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/*memleak in strtrim*/
bool	set_map(t_board *board, int fd)
{
	int		i;
	char	*line;

	board->map = (char **)ft_calloc(sizeof(char *), (board->row + 1));
	if (!board->map)
		return (false);
	i = 0;
	while (i < board->row)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		board->map[i] = ft_strtrim(line, "\n");
		if (board->map[i] == NULL)
			return (free(line), free_board(board), false);
		free(line);
		i++;
	}
	board->map[i] = NULL;
	return (true);
}

/* mem leak when map is not rect, otherwise fine*/
bool	get_col_row(t_board *board, int fd)
{
	int		temp;
	char	*line;

	temp = 0;
	line = get_next_line(fd);
	if (!line)
		return (ft_printf("Error\nEmpty FD\n"), -1);
	board->col = ft_strlen(line) - 1;
	board->row = 1;
	free(line);
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		temp = ft_strlen(line) - 1;
		free(line);
		(board->row)++;
		if (temp != (board->col))
		{
			ft_printf("Error\nMap is not rectangle\n");
			return (false);
		}
	}
	return (true);
}
