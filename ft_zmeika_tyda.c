/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zmeika_tyda.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:03:44 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 15:03:45 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_cordinate	*ft_zmeika_tyda(char **file, int sizer, int num)
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
				&& (file[n][i + 4] == '#') && (file[n][i + 5] == '#')))
			{
				cordinate->bykovka = 'A' + num;
				cordinate->second = 1;
				cordinate->third = cordinate->second + 3 + sizer;
				cordinate->fourth = cordinate->third + 1;
				return (cordinate);
			}
			i++;
		}
		n++;
	}
	return (0);
}
