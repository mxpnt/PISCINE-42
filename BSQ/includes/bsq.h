/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glemoine <glemoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 11:10:10 by molatrec          #+#    #+#             */
/*   Updated: 2021/07/28 12:20:43 by glemoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define DEFAULT_PATH "./ressources/small"

typedef struct s_position
{
	int			x;
	int			y;
}					t_position;

typedef struct s_square
{
	int			x;
	int			y;
	int			len;
}					t_square;

typedef struct s_map_info
{
	char			empt;
	char			obst;
	char			full;
	int				size;
	unsigned long	file_size;
	int				lenght;
	int				len_col;
	int				nbr_obst;
}					t_map_info;

char			**ft_split(char *str, char *charset);
int				ft_putstr(char *str);
void			ft_putchar(char c);
int				ft_strlen(char *str);
char			*ft_strjoin(int size, char **strs, char *sep);
int				ft_min(int a, int b);

char			*ft_getfile(char *path);

int				ft_check_map(char **map, t_map_info *map_info);
int				ft_check_map(char **map, t_map_info *map_info);
int				ft_check_mapinfo(char **map, t_map_info *map_info);
int				ft_check_mapvalid(char **map, t_map_info *map_info);

t_square		*ft_resolve(char **map_num, char ***map, t_map_info *info);

int				ft_refill(char ***map, t_square *res, t_map_info *map_info);
int				ft_display(char **map, t_map_info *map_info);

int				ft_prob_len_min(char ***map_num, t_map_info *map_info);
#endif