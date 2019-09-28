/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_chk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 18:08:44 by drafe             #+#    #+#             */
/*   Updated: 2019/05/02 16:22:58 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main(int argv, char **argc)
{
	char		*a;
	char		*a2;
	int			n;

	a = "a";
	n = 0;
	a = argc[1];
	ft_putchar('F');
	ft_bzero(a, n);
	ft_putstr(a);
	ft_putchar('>');
	ft_putchar('S');
	a2 = argc[2];
	bzero(a2, n);
	ft_putstr(a2);
	ft_putchar('\n');
}
