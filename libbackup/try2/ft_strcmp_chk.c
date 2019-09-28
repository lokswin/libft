/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 18:18:17 by drafe             #+#    #+#             */
/*   Updated: 2019/05/10 17:28:39 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main(int argv, char **argc)
{
/*	const char	*s1;
	const char  *s2;
	const char  *s3;
	const char  *s4;*/

	argv = argv + 1 - 1;
	argc[1] = argc[1];
	ft_putstr("F:");
	ft_putnbr(ft_strcmp("Ⅷ", "V"));
	ft_putstr(" = S:");
	ft_putnbr(strcmp("Ⅷ", "V"));
	ft_putstr("\nF2:");
    ft_putnbr(ft_strcmp("a", "c"));
    ft_putstr(" = S2:");
    ft_putnbr(strcmp("a", "c"));
	ft_putstr("\nF3:");
    ft_putnbr(ft_strcmp("abc", "abz"));
    ft_putstr(" = S3:");
    ft_putnbr(strcmp("abc", "abz"));
	ft_putstr("\nF4:");
    ft_putnbr(ft_strcmp("Z3", "Z0"));
    ft_putstr(" = S4:");
    ft_putnbr(strcmp("Z3", "Z0"));
	ft_putstr("\nF5:");
    ft_putnbr(ft_strcmp("", ""));
    ft_putstr(" = S5:");
    ft_putnbr(strcmp("", ""));
	ft_putstr("\nF6:");
    ft_putnbr(ft_strcmp("\200", "\0"));
    ft_putstr(" = S6:");
    ft_putnbr(strcmp("\200", "\0"));	
}
