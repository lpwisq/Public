/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:52:15 by lpwi              #+#    #+#             */
/*   Updated: 2024/09/28 13:45:56 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	press_keys_util(t_board *board, int map_row, int map_col)
{
	if (board->map[board->player_y][board->player_x] == 'X'
			&& board->bag == board->c_count)
		return ;
	if (board->map[map_row][map_col] == 'C')
		(board->bag)++;
	if (board->map[map_row][map_col] == 'E')
	{
		board->map[board->player_y][board->player_x] = '0';
		board->map[map_row][map_col] = 'X';
		if (board->bag == board->c_count)
			ft_printf("Win!\n");
	}
	else if (board->map[board->player_y][board->player_x] == 'X')
	{
		board->map[board->player_y][board->player_x] = 'E';
		board->map[map_row][map_col] = 'P';
	}
	else
	{
		board->map[board->player_y][board->player_x] = '0';
		board->map[map_row][map_col] = 'P';
	}
	board->player_x = map_col;
	board->player_y = map_row;
	set_board(board);
}

int	press_keys(int keysym, t_board *board)
{
	int	map_row;
	int	map_col;

	map_row = board->player_y;
	map_col = board->player_x;
	if (keysym == XK_d)
		map_col++;
	else if (keysym == XK_a)
		map_col--;
	else if (keysym == XK_s)
		map_row++;
	else if (keysym == XK_w)
		map_row--;
	else if (keysym == XK_Escape)
		close_x(board);
	if (board->map[map_row][map_col] != '1')
		press_keys_util(board, map_row, map_col);
	return (0);
}
