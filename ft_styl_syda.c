/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_styl_syda.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 17:40:28 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/27 17:40:28 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_cordinate	*ft_styl_syda(char **file, int sizer, int num)
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
				&& (file[n][i + 9] == '#') && (file[n][i + 10] == '#')))
			{
				cordinate->bykovka = 'A' + num;
				cordinate->second = 5;
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
