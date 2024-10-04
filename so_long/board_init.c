/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:36:21 by lpwi              #+#    #+#             */
/*   Updated: 2024/09/28 12:42:40 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_img(t_board *board)
{
	int	x;

	x = 64;
	board->img.floor_img = mlx_xpm_file_to_image(board->mlx,
			"images/floor.xpm", &x, &x);
	board->img.wall_img = mlx_xpm_file_to_image(board->mlx,
			"images/wall.xpm", &x, &x);
	board->img.char_img = mlx_xpm_file_to_image(board->mlx,
			"images/character.xpm", &x, &x);
	board->img.collectible_img = mlx_xpm_file_to_image(board->mlx,
			"images/collectible.xpm", &x, &x);
	board->img.exit_img = mlx_xpm_file_to_image(board->mlx,
			"images/exit.xpm", &x, &x);
	board->img.on_exit_img = mlx_xpm_file_to_image(board->mlx,
			"images/on_exit.xpm", &x, &x);
}

static void	set_board_util(t_board *board, int x, int y, char c)
{
	if (c == '1')
		mlx_put_image_to_window(board->mlx, board->win,
			board->img.wall_img, y * 64, x * 64);
	else if (c == '0')
		mlx_put_image_to_window(board->mlx, board->win,
			board->img.floor_img, y * 64, x * 64);
	else if (c == 'C')
		mlx_put_image_to_window(board->mlx, board->win,
			board->img.collectible_img, y * 64, x * 64);
	else if (c == 'P')
		mlx_put_image_to_window(board->mlx, board->win,
			board->img.char_img, y * 64, x * 64);
	else if (c == 'E')
		mlx_put_image_to_window(board->mlx, board->win,
			board->img.exit_img, y * 64, x * 64);
	else if (c == 'X')
		mlx_put_image_to_window(board->mlx, board->win,
			board->img.on_exit_img, y * 64, x * 64);
}

void	set_board(t_board *board)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < board->row)
	{
		y = 0;
		while (y < board->col)
		{
			set_board_util(board, x, y, board->map[x][y]);
			y++;
		}
		x++;
	}
}
