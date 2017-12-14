/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sharps_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:30:38 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/12/08 13:30:41 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static t_tests	varible(void)
{
	t_tests		tests;

	tests.i = 0;
	tests.n = 0;
	tests.result = 0;
	return (tests);
}

int				ft_sharps_test(char **file)
{
	int			sharps;
	t_tests		tests;

	tests = varible();
	sharps = 0;
	while (file[tests.n])
	{
		while (file[tests.n][tests.i])
		{
			if (file[tests.n][tests.i] == '#')
				sharps++;
			if (sharps == 4)
			{
				tests.result++;
				sharps = 0;
			}
			tests.i++;
		}
		tests.i = 0;
		tests.n++;
	}
	if (tests.result == tests.n)
		return (1);
	else
		return (0);
}
