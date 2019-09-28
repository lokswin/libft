/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter_chk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 18:05:36 by drafe             #+#    #+#             */
/*   Updated: 2019/04/30 18:04:21 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	f = ft_strclr;
	ft_striter(s, NULL);
	i++;
	ft_putstr("\nafter:");
	ft_putstr(s);
}
