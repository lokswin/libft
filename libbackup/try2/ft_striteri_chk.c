/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_chk.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 20:44:34 by drafe             #+#    #+#             */
/*   Updated: 2019/04/30 18:04:32 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri_test(unsigned int i, char *s)
{
	ft_putnbr(i);
	ft_putchar(*s);
}

int				main(int argv, char **argc)
{
	void		*f;
	char		*s;
	int			i;

	i = 1;
	s = "abcdef";
	s = argc[1];
	ft_putstr("before:");
	ft_putstr(s);
	f = ft_striteri_test;
	ft_striteri(s, f);
	i++;
	ft_putstr("\nafter:");
	ft_putstr(s);
}
