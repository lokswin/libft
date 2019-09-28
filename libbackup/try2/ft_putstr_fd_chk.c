/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_chk.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:11:23 by drafe             #+#    #+#             */
/*   Updated: 2019/04/16 20:02:43 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(int argv, char **argc)
{
	const char	*a;
	int		i;

	a = "a";
	i = 1;
	while (argv > i)
	{
		a = argc[i];
		ft_putstr("fd:");
		ft_putnbr(i);
		ft_putstr_fd(a, i);
		ft_putchar('\n');
		i++;
	}
}
