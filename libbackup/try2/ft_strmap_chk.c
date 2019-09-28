/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 20:58:33 by drafe             #+#    #+#             */
/*   Updated: 2019/05/10 16:46:53 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		ft_strmap_test(char c)
{
	c = 'a';
	return (c);
}

int				main(int argv, char **argc)
{
	char const	*s;
	int			i;

	i = 1;
	s = "abc";
	argv = argv + 1 - 1;
	argc[1] = argc[1];
	ft_putstr("before:");
	ft_putstr(s);
	i++;
	ft_putstr("\nafter:");
	ft_putstr(ft_strmap(s, ft_strmap_test));
}
