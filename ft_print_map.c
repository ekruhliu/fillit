/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 19:28:09 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/12/08 19:28:10 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static	void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_print_map(char *map)
{
	int i;

	i = 0;
	while (map[i])
	{
		ft_putchar(map[i]);
		i++;
	}
	ft_putchar('\n');
}
