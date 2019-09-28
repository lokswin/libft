/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:26:52 by drafe             #+#    #+#             */
/*   Updated: 2019/05/02 17:01:38 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main(int argv, char **argc)
{
	const char	*a;
	const char  *a2;

	a = "avbcxc";
	a2 = "avbcxc";
	argc[1] = 0;
	ft_putstr("F:");
	ft_putnbr(ft_strlen(a));
	ft_putstr("\nS:");
	ft_putnbr(strlen(a2));
}
