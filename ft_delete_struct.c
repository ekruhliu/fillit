/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_struct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 14:11:49 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/12/09 14:11:49 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_delete_struct(t_cordinate **cordinate)
{
	int i;

	i = 0;
	while (cordinate[i])
	{
		free(cordinate[i]);
		cordinate[i] = NULL;
		i++;
	}
}
