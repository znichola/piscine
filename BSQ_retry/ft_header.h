/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:32:54 by graux             #+#    #+#             */
/*   Updated: 2022/06/30 16:12:39 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define MAP_ERROR "map error\n"

typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;

typedef struct s_cords
{
	int	x;
	int	y;
}	t_cords;

typedef struct s_map_meta_data
{
	char	empty;
	char	obst;
	char	full;
	int		line_count;
	int		line_len;
	int		obst_count;
}	t_map_data;

typedef struct s_sol
{
	t_cords	position;
	int		size;
}	t_sol;

/*	ft_atoi	*/
int		ft_is_numeric(char c);
int		ft_atoi(char *str);

/*	ft_input	*/
int		ft_line_count(char *str);
int		ft_line_len(char *str);
t_bool	ft_char_validaton(t_map_data *d, char *str);
t_bool	ft_input_validation(t_map_data *data, char *str);

//ft_read_board.c
int		ft_file_content(char *buffer, int buff_size, char *path, t_bool std_in);
char	*ft_read_board(char *path, t_bool std_in);

//ft_obstacles.c
void	ft_print_obstacle(int obstacle_num, t_cords obstacle);
void	ft_show_obstacles(t_map_data meta_data, t_cords *obstacles);
t_cords	*ft_init_obstacles(t_map_data meta_data, char *board);

//ft_check_sauare.c
t_bool	ft_check_square(t_cords start, int size, t_cords *obs, int obstc);

//ft_solve.c
t_cords	*ft_create_cords(int x, int y, t_cords *cords);
t_bool	ft_solve(t_map_data md, t_cords *obs, int size, t_sol *sol);
void	ft_set_minus(int *a, int *b, int *c);
t_bool	ft_check_full(char *b_p, char *b_s, t_map_data *md, t_sol *solution);
void	ft_free(char *b_p, t_cords *obst);

//ft_strutils.c
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_puterr(char *str, int errn);
void	ft_putnbr(long nb);

//ft_print.c
void	ft_print_map_metadata(t_map_data *d, char *msg);
void	ft_print_cords(t_cords *c, char *msg);
void	ft_print_solution(char *str, t_map_data *m, t_sol *s, t_bool spaced);
#endif
