/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_molnia_syda.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:05:12 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 15:05:13 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_cordinate	*ft_molnia_syda(char **file, int sizer, int num)
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
			if (((file[n][i] == '#') && (file[n][i + 5] == '#')
				&& (file[n][i + 6] == '#') && (file[n][i + 11] == '#')))
			{
				cordinate->bykovka = 'A' + num;
				cordinate->second = 5 + sizer;
				cordinate->third = cordinate->second + 1;
				cordinate->fourth = cordinate->third + 5 + sizer;
				return (cordinate);
			}
			i++;
		}
		n++;
	}
	return (0);
}
