/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_split.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 16:08:24 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 16:08:25 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static t_cordinate	**ft_make_cord(char **file, t_cordinate **s_a, int sizer)
{
	t_cordinate		**cordinate;

	cordinate = s_a;
	cordinate = ft_figure_part_1(file, cordinate, sizer);
	cordinate = ft_figure_part_2(file, cordinate, sizer);
	cordinate = ft_figure_part_3(file, cordinate, sizer);
	return (cordinate);
}

t_cordinate			**ft_struct_split(char **file, int sizer)
{
	t_cordinate		**s_a;
	int				n;
	int				x;

	n = 0;
	x = 0;
	while (file[x])
		x++;
	if (!(s_a = (t_cordinate**)malloc(sizeof(t_cordinate*) * x)))
	{
		free(s_a);
		return (NULL);
	}
	else
		s_a = ft_make_cord(file, s_a, sizer);
	s_a[x] = 0;
	return (s_a);
}
