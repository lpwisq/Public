/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:30:23 by lpwi              #+#    #+#             */
/*   Updated: 2024/09/28 12:36:00 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	init_struct(t_board *board)
{
	board->x = 0;
	board->y = 0;
	board->row = 0;
	board->col = 0;
	board->moves = 0;
	board->c_count = 0;
	board->bag = 0;
	board->player_x = 0;
	board->player_y = 0;
	board->exit_x = 0;
	board->exit_y = 0;
}

static void	validate_map(t_board *board)
{
	if (!get_player(board) || !get_exit(board) || !wall_check(board) || !get_collectible(board) || !path_check(board))
	{
		free_board(board);
		ft_printf("Error\nInvalid map\n");
		exit(1);
	}
}

int	main(int argc, char **argv)
{
	t_board	board;
	int		fd;

	if (argc == 2)
	{
		init_struct(&board);
		fd = open(argv[1], O_RDONLY);
		if (!get_col_row(&board, fd))
			exit(1);
		close(fd);
		fd = open(argv[1], O_RDONLY);
		if (!set_map(&board, fd))
			exit(1);
		close(fd);
		validate_map(&board);
		printf("this should not be printed if invalid map\n");
		board.mlx = mlx_init();
		board.win = mlx_new_window(board.mlx, board.col * 64,
				board.row * 64, "so_long");
		mlx_hook(board.win, 17, 1L << 17, close_x, &board);
		mlx_key_hook(board.win, press_keys, &board);
		set_img(&board);
		set_board(&board);
		mlx_loop(board.mlx);
	}
}
