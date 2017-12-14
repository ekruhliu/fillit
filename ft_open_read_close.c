/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_read_close.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 13:44:02 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/21 13:44:02 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**ft_open_read_close(char *file_name)
{
	int		fd;
	int		size;
	char	buffer[BUFF_SIZE];
	char	**ret;

	fd = open(file_name, O_RDONLY);
	if (fd <= 0)
		return (0);
	else
	{
		size = read(fd, buffer, BUFF_SIZE);
		buffer[size] = '\0';
		close(fd);
		ret = ft_split(buffer);
		return (ret);
	}
}
