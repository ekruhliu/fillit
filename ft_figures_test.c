/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figures_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:31:07 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/12/08 13:31:08 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static	t_f	variable(void)
{
	t_f		f;

	f.n = 0;
	f.result = 0;
	f.figure = 0;
	f.res = 0;
	return (f);
}

int			ft_figures_test(char **file)
{
	t_f		f;

	f = variable();
	while (file[f.n])
	{
		if (ft_palka(&file[f.n], 0, 0) || ft_h_palka(&file[f.n], 0)
		|| ft_korobka(&file[f.n], 0, 0) || ft_fuck_sleva(&file[f.n], 0, 0)
		|| ft_fuck_snizu(&file[f.n], 0, 0) || ft_fuck_sprava(&file[f.n], 0, 0)
		|| ft_fuck_sverhy(&file[f.n], 0, 0) || ft_krovat_l(&file[f.n], 0, 0)
		|| ft_krovat_r(&file[f.n], 0, 0) || ft_molnia_syda(&file[f.n], 0, 0)
		|| ft_molnia_tyda(&file[f.n], 0, 0) || ft_pistolet_l(&file[f.n], 0, 0)
		|| ft_pistolet_r(&file[f.n], 0, 0) || ft_topor_syda(&file[f.n], 0, 0)
		|| ft_topor_tyda(&file[f.n], 0, 0) || ft_zmeika_syda(&file[f.n], 0, 0)
		|| ft_zmeika_tyda(&file[f.n], 0, 0) || ft_styl_syda(&file[f.n], 0, 0)
		|| ft_styl_tyda(&file[f.n], 0, 0))
			f.figure++;
		if (f.figure == 1)
		{
			f.result++;
			f.figure = 0;
		}
		f.n++;
	}
	(f.result == f.n ? f.res = 1 : 0);
	return (f.res);
}
