/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:12:59 by lpwi              #+#    #+#             */
/*   Updated: 2024/09/28 13:13:11 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

bool	get_player(t_board *board)
{
	int	x;
	int	y;
	int	player_count;

	x = 0;
	player_count = 0;
	while (x < board->row)
	{
		y = 0;
		while (y < board->col)
		{
			if (board->map[x][y] == 'P')
			{
				board->player_x = y;
				board->player_y = x;
				player_count++;
			}
			y++;
		}
		x++;
	}
	if (player_count == 1)
		return (true);
	return (false);
}

bool	get_exit(t_board *board)
{
	int	x;
	int	y;
	int	exit_count;

	x = 0;
	exit_count = 0;
	while (x < board->row)
	{
		y = 0;
		while (y < board->col)
		{
			if (board->map[x][y] == 'E')
			{
				board->exit_x = y;
				board->exit_y = x;
				exit_count++;
			}
			y++;
		}
		x++;
	}
	if (exit_count == 1)
		return (true);
	return (false);
}

bool	get_collectible(t_board *board)
{
	int	x;
	int	y;

	board->c_count = 0;
	x = 0;
	y = 0;
	while (x < board->row)
	{
		while (y < board->col)
		{
			if (board->map[x][y] == 'C')
				(board->c_count)++;
			y++;
		}
		y = 0;
		x++;
	}
	if (board->c_count >= 1)
		return (true);
	return (false);
}

static void	wall_check_util(t_board *board, int x)
{
	int	j;

	j = 0;
	while (board->map[0][j])
	{
		if (board->map[0][j] == '1')
			j++;
		else
			exit(1);
	}
}

bool	wall_check(t_board *board)
{
	int	j;

	j = 1;
	wall_check_util(board, 0);
	wall_check_util(board, board->row - 1);
	while (j < (board->row - 1))
	{
		if (board->map[j][0] == '1' && board->map[j][board->col - 1] == '1')
			j++;
		else
			return (false);
	}
	return (true);
}
