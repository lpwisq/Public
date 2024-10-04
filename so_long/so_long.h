/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:50:21 by lpwi              #+#    #+#             */
/*   Updated: 2024/09/28 12:55:31 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "minilibx-linux/mlx.h"
# include <stdio.h>
# include <stdlib.h>
# include <X11/keysym.h>
# include "Libft/libft.h"
# include <fcntl.h>
# include <unistd.h>
# include <stdbool.h>

typedef struct s_img
{
	void	*floor_img;
	void	*wall_img;
	void	*char_img;
	void	*collectible_img;
	void	*exit_img;
	void	*on_exit_img;
}	t_img;

typedef struct s_board
{
	t_img	img;
	void	*mlx;
	void	*win;
	void	*xpm_img;
	int		x;
	int		y;
	int		row;
	int		col;
	int		moves;
	int		c_count;
	int		bag;
	int		player_x;
	int		player_y;
	int		exit_x;
	int		exit_y;
	char	**map;
	char	**flood_map;
}	t_board;
/* board inititation */
void	set_img(t_board *board);
void	set_board(t_board *board);

/* map initiation */
bool	get_col_row(t_board *board, int fd);
bool	get_player(t_board *board);
bool	get_exit(t_board *board);
bool	get_collectible(t_board *board);
bool	set_map(t_board *board, int fd);
bool	wall_check(t_board *board);

/* destroy and free*/
void	free_board(t_board *board);
int		close_x(t_board *board);

/* wasd actions*/
int		press_keys(int keysym, t_board *board);
/*path validation*/
bool    path_check(t_board *board);

#endif
