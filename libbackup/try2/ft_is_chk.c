/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischk.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 19:57:45 by drafe             #+#    #+#             */
/*   Updated: 2019/04/16 19:38:41 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int			main(int argv, char **argc)
{
	char	a;
	int		i;

	a = 'a';//1
	i = 1;
	while (argv > i)
	{
		a = argc[i][0];
		ft_putchar('F');
		ft_putnbr(ft_isalnum(a));
		ft_putchar('>');
		ft_putchar('S');
		ft_putnbr(isalnum(a));
		ft_putchar('\n');
		i++;
	}
}
