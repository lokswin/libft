/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:59:57 by drafe             #+#    #+#             */
/*   Updated: 2019/05/20 19:34:29 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(void)
{
	ft_putstr("45 = F1:");
	ft_putnbr(45);
	ft_putstr("\n-45 = F2:");
	ft_putnbr(-45);
	ft_putstr("\n1234567890 = F3:");
	ft_putnbr(1234567890);
	ft_putstr("\n0 = F4:");
	ft_putnbr(0);
	ft_putstr("\nmin_int = F5:");
    ft_putnbr(-2147483648);
    ft_putstr("\nmax_int = F6:");
	ft_putnbr(2147483647);
	ft_putstr("\n10 = F7:");
    ft_putnbr(10);
	ft_putstr("\n100 = F7:");
    ft_putnbr(100);
}
