/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h_palka.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:03:24 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 15:03:26 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_cordinate	*ft_h_palka(char **file, int num)
{
	int			i;
	int			n;
	t_cordinate *cordinate;

	cordinate = (t_cordinate*)malloc(sizeof(t_cordinate));
	i = 0;
	n = 0;
	while (file[n])
	{
		while (file[n][i])
		{
			if (((file[n][i] == '#') && (file[n][i + 1] == '#')
				&& (file[n][i + 2] == '#') && (file[n][i + 3] == '#')))
			{
				cordinate->bykovka = 'A' + num;
				cordinate->second = 1;
				cordinate->third = 2;
				cordinate->fourth = 3;
				return (cordinate);
			}
			i++;
		}
		n++;
	}
	return (0);
}
