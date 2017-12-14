/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newlines_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:30:52 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/12/08 13:30:53 by ekruhliu         ###   ########.fr       */
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

int				ft_newlines_test(char **file)
{
	int			newlines;
	t_tests		tests;

	tests = varible();
	newlines = 0;
	while (file[tests.n])
	{
		while (file[tests.n][tests.i])
		{
			if (file[tests.n][tests.i] == '\n')
				newlines++;
			if (newlines == 3)
			{
				tests.result++;
				newlines = 0;
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
