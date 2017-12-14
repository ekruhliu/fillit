/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 13:16:01 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/21 13:16:02 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct	s_cordinate
{
	char		bykovka;
	int			second;
	int			third;
	int			fourth;
}				t_cordinate;
typedef struct	s_pack
{
	int			n;
	int			h;
}				t_pack;
typedef	struct	s_tests
{
	int			i;
	int			n;
	int			result;
}				t_tests;
typedef	struct	s_split
{
	char		**s_a;
	int			cubes;
	int			i;
	int			n;
	int			train;
}				t_split;
typedef	struct	s_f
{
	int n;
	int res;
	int	result;
	int figure;
}				t_f;
typedef struct	s_soul
{
	char	*map;
	int		m;
	int		k;
	int		x;
	int		done;
}				t_soul;
# define BUFF_SIZE 10000
# define ERROR write(1, "error\n", 6);
# define USAGE write(1, "usage: ./fillit source_file\n", 28);

char			**ft_open_read_close(char *file_name);
char			**ft_split(char *s);
int				ft_dots_test(char **file);
int				ft_newlines_test(char **file);
int				ft_sharps_test(char **file);
int				ft_finale_grade(char **file);
int				ft_figures_test(char **file);
int				ft_maps_number_test(char **file);
char			*ft_create_map(char **file, int u);
int				ft_strlen(char *str);
int				ft_proverko(char *s_map, t_cordinate **s_fig, \
				int fig_i, int map_i);
int				ft_zapolnyator(t_cordinate **s_fig, char *s_map,\
				int map_i, int fig_i);
void			ft_demon_soul(t_cordinate **cordinate, char **file, int sizer);
int				ft_map_size(char **figures);
int				ft_demon_brain(char *map, t_cordinate **cordinate, \
				int fig_i);
void			ft_print_map(char *map);
void			ft_delete_file(char **file);
void			ft_delete_struct(t_cordinate **cordinate);
int				ft_error_check(char **file);
t_cordinate		**ft_figure_part_1(char **file, t_cordinate **s_a, int sizer);
t_cordinate		**ft_figure_part_2(char **file, t_cordinate **s_a, int sizer);
t_cordinate		**ft_figure_part_3(char **file, t_cordinate **s_a, int sizer);
t_cordinate		**ft_struct_split(char **file, int sizer);
t_cordinate		*ft_palka(char **file, int sizer, int num);
t_cordinate		*ft_h_palka(char **file, int num);
t_cordinate		*ft_fuck_sleva(char **file, int sizer, int num);
t_cordinate		*ft_fuck_snizu(char **file, int sizer, int num);
t_cordinate		*ft_fuck_sprava(char **file, int sizer, int num);
t_cordinate		*ft_fuck_sverhy(char **file, int sizer, int num);
t_cordinate		*ft_korobka(char **file, int sizer, int num);
t_cordinate		*ft_molnia_syda(char **file, int sizer, int num);
t_cordinate		*ft_molnia_tyda(char **file, int sizer, int num);
t_cordinate		*ft_krovat_l(char **file, int sizer, int num);
t_cordinate		*ft_krovat_r(char **file, int sizer, int num);
t_cordinate		*ft_pistolet_l(char **file, int sizer, int num);
t_cordinate		*ft_pistolet_r(char **file, int sizer, int num);
t_cordinate		*ft_topor_syda(char **file, int sizer, int num);
t_cordinate		*ft_topor_tyda(char **file, int sizer, int num);
t_cordinate		*ft_zmeika_syda(char **file, int sizer, int num);
t_cordinate		*ft_zmeika_tyda(char **file, int sizer, int num);
t_cordinate		*ft_styl_syda(char **file, int sizer, int num);
t_cordinate		*ft_styl_tyda(char **file, int sizer, int num);

#endif
