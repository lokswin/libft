/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 19:05:27 by drafe             #+#    #+#             */
/*   Updated: 2019/05/02 17:21:45 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(int argv, char **argc)
{
	char	*s;

	s = "abc";
//	s = argc[1];
	ft_putstr("F:");
	ft_strclr(s);
	if (s)
	{
		ft_putstr("\o_o/");
	}
}