/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finale_grade.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:40:02 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/22 15:40:13 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int				ft_finale_grade(char **file)
{
	int			test_1;
	int			test_2;
	int			test_3;
	int			test_4;
	int			test_5;

	test_1 = ft_dots_test(file);
	test_2 = ft_sharps_test(file);
	test_3 = ft_newlines_test(file);
	test_4 = ft_figures_test(file);
	test_5 = ft_maps_number_test(file);
	if (test_1 == 1 && test_2 == 1 && test_3 == 1 && test_4 == 1 && test_5 == 1)
		return (1);
	return (0);
}
