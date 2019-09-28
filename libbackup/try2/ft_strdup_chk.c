/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 19:25:34 by drafe             #+#    #+#             */
/*   Updated: 2019/05/07 17:09:36 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main(int argv, char **argc)
{
	const char	*s;
	const char  *s2;

	argv = argv + 1 -1;
	s = argc[1];
	ft_putstr("F:");
	ft_putstr(ft_strdup(s));
	ft_putstr("\nS:");
	s2 = argc[2];
	ft_putstr(strdup(s2));
}
