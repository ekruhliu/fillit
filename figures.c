/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   figures.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 13:32:35 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/12/07 13:32:37 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static t_pack	varible(void)
{
	t_pack		pack;

	pack.n = 0;
	pack.h = 0;
	return (pack);
}

t_cordinate		**ft_figure_part_1(char **file, t_cordinate **s_a, int sizer)
{
	t_pack		pack;
	t_cordinate **cordinate;

	pack = varible();
	cordinate = s_a;
	while (file[pack.n])
	{
		if (ft_palka(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_palka(&file[pack.n], sizer, pack.n);
		if (ft_h_palka(&file[pack.n], pack.n))
			cordinate[pack.h] = ft_h_palka(&file[pack.n], pack.n);
		if (ft_fuck_sleva(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_fuck_sleva(&file[pack.n], sizer, pack.n);
		if (ft_fuck_snizu(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_fuck_snizu(&file[pack.n], sizer, pack.n);
		if (ft_fuck_sprava(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_fuck_sprava(&file[pack.n], sizer, pack.n);
		if (ft_fuck_sverhy(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_fuck_sverhy(&file[pack.n], sizer, pack.n);
		if (ft_topor_syda(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_topor_syda(&file[pack.n], sizer, pack.n);
		pack.h++;
		pack.n++;
	}
	return (cordinate);
}

t_cordinate		**ft_figure_part_2(char **file, t_cordinate **s_a, int sizer)
{
	t_pack		pack;
	t_cordinate **cordinate;

	pack = varible();
	cordinate = s_a;
	while (file[pack.n])
	{
		if (ft_korobka(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_korobka(&file[pack.n], sizer, pack.n);
		if (ft_molnia_syda(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_molnia_syda(&file[pack.n], sizer, pack.n);
		if (ft_molnia_tyda(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_molnia_tyda(&file[pack.n], sizer, pack.n);
		if (ft_krovat_l(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_krovat_l(&file[pack.n], sizer, pack.n);
		if (ft_krovat_r(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_krovat_r(&file[pack.n], sizer, pack.n);
		if (ft_pistolet_l(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_pistolet_l(&file[pack.n], sizer, pack.n);
		if (ft_pistolet_r(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_pistolet_r(&file[pack.n], sizer, pack.n);
		pack.h++;
		pack.n++;
	}
	return (cordinate);
}

t_cordinate		**ft_figure_part_3(char **file, t_cordinate **s_a, int sizer)
{
	t_pack		pack;
	t_cordinate **cordinate;

	pack = varible();
	cordinate = s_a;
	while (file[pack.n])
	{
		if (ft_zmeika_syda(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_zmeika_syda(&file[pack.n], sizer, pack.n);
		if (ft_zmeika_tyda(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_zmeika_tyda(&file[pack.n], sizer, pack.n);
		if (ft_styl_syda(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_styl_syda(&file[pack.n], sizer, pack.n);
		if (ft_styl_tyda(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_styl_tyda(&file[pack.n], sizer, pack.n);
		if (ft_topor_tyda(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_topor_tyda(&file[pack.n], sizer, pack.n);
		pack.h++;
		pack.n++;
	}
	return (cordinate);
}
