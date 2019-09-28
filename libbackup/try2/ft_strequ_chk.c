/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 21:12:24 by drafe             #+#    #+#             */
/*   Updated: 2019/05/21 18:38:47 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main()
{

	ft_putstr("F:0 = ");
	ft_putnbr(ft_strequ(NULL, "abc"));
	ft_putstr("\nF2:1 = ");
	ft_putnbr(ft_strequ("", ""));
	ft_putstr("\nF3:1 = ");
    ft_putnbr(ft_strequ(NULL, NULL));
	ft_putstr("\nF4:1 =");
    ft_putnbr(ft_strequ("1", "1"));
	ft_putstr("\nF5:0 =");
    ft_putnbr(ft_strequ("10", "1"));
}
