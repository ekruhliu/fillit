/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 14:41:44 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/12/07 14:41:45 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_create_map(char **file, int u)
{
	int		i;
	char	*map;
	int		t;
	int		m;

	m = 0;
	t = 0;
	i = 0;
	while (i * i < ft_map_size(file) * 4)
		i++;
	i = i + u;
	map = (char*)malloc(sizeof(char) * ((i * i) + i) + 1);
	t = i * i + i;
	while (m < t - 1)
	{
		if ((m + 1) % (i + 1) == 0 && m != 0)
			map[m] = '\n';
		else
			map[m] = '.';
		m++;
	}
	map[m] = '\0';
	return (map);
}
