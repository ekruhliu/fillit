/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:44:43 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/22 10:44:44 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int		ft_cubes_count(const char *file)
{
	int			i;
	int			n;

	i = 0;
	n = 0;
	while (file[i] != '\0')
	{
		if ((file[i] == '\n' && file[i + 1] == '\n'))
			n++;
		i++;
	}
	return (n + 1);
}

static	t_split	variable(void)
{
	t_split		split;

	split.i = 0;
	split.n = 0;
	split.train = 0;
	return (split);
}

char			**ft_split(char *file)
{
	t_split		split;

	split = variable();
	split.cubes = ft_cubes_count(file);
	if ((ft_strlen(file) + 1) % 21 != 0)
	{
		ERROR;
		exit(EXIT_SUCCESS);
	}
	if (!(split.s_a = (char **)malloc(sizeof(char*) * (split.cubes + 1))))
		return (NULL);
	while (split.n < split.cubes)
	{
		if (!(split.s_a[split.n] = (char*)malloc(sizeof(char) * 21)))
			return (NULL);
		while (split.i < 19)
			split.s_a[split.n][split.i++] = file[split.train++];
		split.s_a[split.n][split.i] = '\0';
		split.i = 0;
		split.n++;
		split.train += 2;
	}
	split.s_a[split.n] = 0;
	return (split.s_a);
}
