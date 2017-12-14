/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dots_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:30:27 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/12/08 13:30:28 by ekruhliu         ###   ########.fr       */
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

int				ft_dots_test(char **file)
{
	int			dots;
	t_tests		tests;

	tests = varible();
	dots = 0;
	while (file[tests.n])
	{
		while (file[tests.n][tests.i])
		{
			if (file[tests.n][tests.i] == '.')
				dots++;
			if (dots == 12)
			{
				tests.result++;
				dots = 0;
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
