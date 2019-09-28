/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 20:34:40 by drafe             #+#    #+#             */
/*   Updated: 2019/04/29 16:22:26 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main(int argv, char **argc)
{
	int			*dst;
	const int	*src;
	int			i;
	const int	a = 3333;

	i = 1111;
	dst = &i;
	src = &a;
//	while (i > 0)
//	{
//		dst = argc[1];
//		src = argc[2];
		ft_putchar('F');
		ft_putnbr(*(int*)(ft_memcpy(dst, src, 3)));
		ft_putstr(">S");
		ft_putnbr(*(int*)(memcpy(dst, src, 3)));
//		i++;
//	}
}
