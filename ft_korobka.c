/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_korobka.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:05:25 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 15:05:26 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_cordinate	*ft_korobka(char **file, int sizer, int num)
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
				&& (file[n][i + 5] == '#') && (file[n][i + 6] == '#')))
			{
				cordinate->bykovka = 'A' + num;
				cordinate->second = 1;
				cordinate->third = cordinate->second + 4 + sizer;
				cordinate->fourth = cordinate->third + 1;
				return (cordinate);
			}
			i++;
		}
		n++;
	}
	return (0);
}
