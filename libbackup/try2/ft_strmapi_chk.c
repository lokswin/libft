/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_chk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 17:25:23 by drafe             #+#    #+#             */
/*   Updated: 2019/05/10 16:47:17 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		ft_strmapi_test(unsigned int n, char c)
{
	int		tmp;

	tmp = n;
	c = 'a';
	ft_putnbr(n);
	return (c);
}

int				main(int argv, char **argc)
{
	char const	*s;

	s = "abc";
	argv = argv + 1 - 1;
	argc[1] = argc[1];
	ft_putstr("before:");
	ft_putstr(s);
	ft_putstr("\nafter:");
	ft_putstr(ft_strmapi(s, ft_strmapi_test));
}
