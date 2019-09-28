/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_chk.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 16:33:33 by drafe             #+#    #+#             */
/*   Updated: 2019/05/25 21:06:19 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(void)
{
	char *i1 = ft_itoa((-2147483647 -1));
	if (atoi(i1) != (-2147483647 -1))
	{
		ft_putstr("\n|TEST_min_FAILED|");
	}
	ft_putstr("\nTEST_min_SUCCESS\n|");
	free(i1);
	write(2, "", 1);
	char *a2 = ft_itoa(2147483647);
	ft_putstr("\n\na2:");
	ft_putstr(a2);
	if (atoi(a2) != 2147483647)
	{
		ft_putstr("|\n|TEST_max_FAILED|");
	}
	ft_putstr("\nTEST_max_SUCCESS");

	ft_putstr("\n\n|45|\nF1:");
	ft_putstr(ft_itoa(45));
	ft_putstr("\n\n|-45|\nF2:");
	ft_putstr(ft_itoa(-45));
	ft_putstr("\n\n|1234567890|\nF3:");
	ft_putstr(ft_itoa(1234567890));
	ft_putstr("\n\n|0|\nF4:");
	ft_putstr(ft_itoa(0));

	ft_putstr("\n\n|2147483647(||)|\nF__MAX:");
	ft_putstr(ft_itoa(2147483647));
	ft_putstr("\n\n|(-2147483647 -1)(|-|)|\nF6_MIN:");
    ft_putstr(ft_itoa((-2147483647 -1)));
	
}
