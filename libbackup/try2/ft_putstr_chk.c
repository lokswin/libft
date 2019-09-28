/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 20:50:02 by drafe             #+#    #+#             */
/*   Updated: 2019/04/26 18:48:12 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(const char *s)
{
	if (s)
	{
		while (*s != '\0')
		{
			ft_putchar(*s);
			s++;
		}
	}
}

int				main(int argv, char **argc)
{
	const char	*s1;
	int			i;

	s1 = "12345";
	i = 1;
	while (argv > i)
	{
		s1 = argc[i];
		s1 = NULL;
		ft_putstr(s1);
		ft_putstr("test");
		i++;
	}
	return (0);
}
