/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_demon_brain.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 18:50:51 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/12/08 18:50:52 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static	int	ft_count_size(t_cordinate **cordinate)
{
	int n;

	n = 0;
	while (cordinate[n])
		n++;
	return (n);
}

static	int	ft_cleaner(char *map, t_cordinate **cordinate, int fig_i)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (map[i])
	{
		if (map[i] == cordinate[fig_i]->bykovka)
		{
			n = i;
			break ;
		}
		i++;
	}
	n++;
	i = 0;
	while (map[i])
	{
		if (map[i] == cordinate[fig_i]->bykovka)
			map[i] = '.';
		i++;
	}
	return (n);
}

int			ft_demon_brain(char *map, t_cordinate **cordinate,
	int fig_i)
{
	int	count_figures;
	int	map_i;
	int	fig_i2;

	fig_i2 = ft_count_size(cordinate);
	map_i = 0;
	count_figures = ft_count_size(cordinate);
	while (fig_i2 != 0 || count_figures != 0)
	{
		while (ft_zapolnyator(cordinate, map, map_i, fig_i))
		{
			fig_i++;
			map_i = 0;
			count_figures--;
			if (count_figures == 0)
				return (1);
		}
		if (fig_i == 0)
			return (0);
		count_figures++;
		fig_i--;
		fig_i2 = fig_i;
		map_i = ft_cleaner(map, cordinate, fig_i);
	}
	return (0);
}
