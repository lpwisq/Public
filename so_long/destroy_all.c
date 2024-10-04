/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:50:38 by lpwi              #+#    #+#             */
/*   Updated: 2024/09/28 12:45:02 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_board(t_board *board)
{
	int	i;

	i = 0;
	while (board->map[i])
	{
		free(board->map[i]);
		i++;
	}
	free(board->map);
}

int	close_x(t_board *board)
{
	if (board->img.floor_img)
		mlx_destroy_image(board->mlx, board->img.floor_img);
	if (board->img.wall_img)
		mlx_destroy_image(board->mlx, board->img.wall_img);
	if (board->img.char_img)
		mlx_destroy_image(board->mlx, board->img.char_img);
	if (board->img.collectible_img)
		mlx_destroy_image(board->mlx, board->img.collectible_img);
	if (board->img.exit_img)
		mlx_destroy_image(board->mlx, board->img.exit_img);
	if (board->img.on_exit_img)
		mlx_destroy_image(board->mlx, board->img.on_exit_img);
	mlx_destroy_window(board->mlx, board->win);
	mlx_destroy_display(board->mlx);
	free(board->mlx);
	free_board(board);
	exit(1);
}
