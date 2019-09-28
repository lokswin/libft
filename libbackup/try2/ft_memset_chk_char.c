/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_chk_char.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 18:17:30 by drafe             #+#    #+#             */
/*   Updated: 2019/04/27 17:14:57 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(int argv, char **argc)
{
	char	*a;
	int		len;
	int		c;
	int		i;

	len = 1;//-1&99
	c = 52;
	i = 1;
	if (len < 0)
		ft_putchar('0');
	while (argv > i)
	{
		a = argc[i];
		//a = NULL;
		//argc[i] = 0;
		ft_putchar('F');
		ft_putstr(ft_memset(a, c, len));
		ft_putstr(">S");
		ft_putstr(memset(a, c, len));
		ft_putchar('\n');
		i++;
	}
}
