/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiniRT.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 21:31:42 by ehillman          #+#    #+#             */
/*   Updated: 2021/02/12 11:02:48 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H
# include "mlx.h"
# include "vectors.h"
# include "figures.h"
# include "vplane.h"
# include "lists.h"
# include "colors.h"
# include "parser.h"
# include "../gnl/get_next_line.h"

# include <unistd.h>
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

# define MALLOC_ERROR -1
# define INV_AM_OF_ARG -2
# define INV_FILE_NAME -3
# define INV_COLOR -4
# define UNKNWN_ARG -5

enum e_spec
{
	S_NUL = 0b00000000,
	S_SP = 0b00000001,
	S_PL = 0b00000010,
	S_SQ = 0b00000100,
	S_CL = 0b00001000,
	S_TR = 0b00010000,
};

void		killed_by_error(int num);
void 		check_valid_name(char *str);
double		d_atoi(char *str);
double 		parse_int_part(char *str);
double 		parse_d_part(char *str);
s_color		col_parse(char *str);
s_color		check_valid_color(s_color *c);
s_scene		*ft_init_scene(void);
void		ray_trace(void *mlx, void *window, s_scene *scene);
int		intersec(s_figures *figures, s_ray *ray);
double		sphere_intersect(s_ray *ray, s_sphere *sp);

#endif
