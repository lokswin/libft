/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 11:25:55 by drafe             #+#    #+#             */
/*   Updated: 2019/02/10 11:26:07 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_putchar.h"

void    ft_putnbr(int nb)
{
    int decimals;
    int temp;

    decimals = 1;
    if (nb < 0)
    {
        nb = -nb;
        ft_putchar('-');
    }
    temp = nb;
    while (temp > 10)
    {
        temp = temp / 10;
        decimals = decimals * 10;
    }
    while (decimals > 0)
    {
        ft_putchar(nb / decimals % 10 + '0');
        decimals = decimals / 10;
    }
    ft_putchar('\n');
}
