/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zapolnyator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 16:17:32 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/29 16:17:33 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_zapolnyator(t_cordinate **s_fig, char *s_map, int map_i, int fig_i)
{
	int n;

	if (ft_proverko(s_map, s_fig, fig_i, map_i) >= 0)
	{
		n = ft_proverko(s_map, s_fig, fig_i, map_i);
		s_map[n] = s_fig[fig_i]->bykovka;
		s_map[n + s_fig[fig_i]->second] = s_fig[fig_i]->bykovka;
		s_map[n + s_fig[fig_i]->third] = s_fig[fig_i]->bykovka;
		s_map[n + s_fig[fig_i]->fourth] = s_fig[fig_i]->bykovka;
		return (1);
	}
	return (0);
}
