/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_validation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:49:46 by lpwi              #+#    #+#             */
/*   Updated: 2024/09/28 14:19:53 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	free_flood_board(t_board *board)
{
	int	i;

	i = 0;
	while (board->flood_map[i])
	{
		free(board->flood_map[i]);
		i++;
	}
	free(board->flood_map);
}

static int	flood_fill(t_board *board, int x, int y)
{
    if (x < 0 || y < 0 || y >= board->row || x >= board->col || (board->flood_map[y][x] != '0' && board->flood_map[y][x] != 'C' && board->flood_map[y][x] != 'P' && board->flood_map[y][x] != 'E'))
        return 0;
    if (board->flood_map[y][x] == 'C')
        (board->bag)--;
    if (board->flood_map[y][x] != 'E')
        board->flood_map[y][x] = 'X';
    flood_fill(board, x-1, y);
    flood_fill(board, x+1, y);
    flood_fill(board, x, y-1);
    flood_fill(board, x, y+1);
    return 0;
}

bool    path_check(t_board *board)
{
    int i = 0;
    board->flood_map = (char **)ft_calloc(sizeof(char *), (board->row + 1));
    if (!board->flood_map)
        return (false);
    while (i < board->row)
    {
        board->flood_map[i] = ft_strdup(board->map[i]);
        if (!board->flood_map[i])
            return (free_flood_board(board), false);
        i++;
    }
    board->map[i] = NULL;
    board->bag = board->c_count;
    flood_fill(board, board->player_x, board->player_y);
    int x;
    int y;
    
    x = board->exit_x;
    y = board->exit_y;
    
    if (board->bag == 0 && board->flood_map[y + 1][x] == 'X' || board->flood_map[y - 1][x] == 'X' || board->flood_map[y][x + 1] == 'x' || board->flood_map[y][x - 1] == 'X')
        return (free_flood_board(board), true);
    return (free_flood_board(board), ft_printf("Error\nInvalid path.\n"), false);
}
/*
#include <string.h>
int main(void)
{
    t_board board;

    board.c_count = 4;
	board.flood_map = malloc(6 * sizeof(char*));

    // Allocate and copy strings to the flood_map
    board.flood_map[0] = strdup("1111111111");
    board.flood_map[1] = strdup("1C00000001");
    board.flood_map[2] = strdup("1000P00001");
    board.flood_map[3] = strdup("1000000EC1");
    board.flood_map[4] = strdup("1111111111");
    board.flood_map[5] = NULL; // Null-terminate the array

    board.player_x = 4;
    board.player_y = 2;
    board.exit_x = 7;
    board.exit_y = 3;  
    board.row = 5;
    board.col = 10;
    printf("path check result: %d\n", path_check(&board));
    printf("4, 2 is %c\n", board.flood_map[board.player_y][board.player_x]);
	// printf("%d\n", flood_fill(&board, 4, 2));
    printf("c_count %d\n", board.c_count);

    int i = 0;
    while (board.flood_map[i])
    {
        printf("%s\n", board.flood_map[i]);
        i++;
    }
}
*/
