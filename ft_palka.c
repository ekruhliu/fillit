/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_palka.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:02:34 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 15:02:35 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_cordinate	*ft_palka(char **file, int sizer, int num)
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
				&& (file[n][i + 10] == '#') && (file[n][i + 15] == '#')))
			{
				cordinate->bykovka = 'A' + num;
				cordinate->second = 5 + sizer;
				cordinate->third = cordinate->second + 5 + sizer;
				cordinate->fourth = cordinate->third + 5 + sizer;
				return (cordinate);
			}
			i++;
		}
		n++;
	}
	return (0);
}
