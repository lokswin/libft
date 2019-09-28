/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_chk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 19:27:18 by drafe             #+#    #+#             */
/*   Updated: 2019/05/28 21:08:10 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main(int argv, char **argc)
{
	argv = argv + 1 - 1;
	argc[1] = argc[1];
	ft_putstr("F:");
	ft_putnbr(ft_strncmp("Ⅷ", "V", 1));
	ft_putstr(" = S:");
	ft_putnbr(strncmp("Ⅷ", "V", 1));
	ft_putstr("\nF2:");
	ft_putnbr(ft_strncmp("a", "c", 0));
	ft_putstr(" = S2:");
	ft_putnbr(strncmp("a", "c", 0));
	ft_putstr("\nF3:");
	ft_putnbr(ft_strncmp("abc", "abz", 4));
	ft_putstr(" = S3:");
	ft_putnbr(strncmp("abc", "abz", 4));
	ft_putstr("\nF4:");
	ft_putnbr(ft_strncmp("ab\0cde", "abcc\0e", 20));
	ft_putstr(" = S4:");
	ft_putnbr(strncmp("ab\0cde", "abcc\0e", 20));
	ft_putstr("\nF5:");
	ft_putnbr(ft_strncmp("", "", 3));
	ft_putstr(" = S5:");
	ft_putnbr(strncmp("", "", 3));
	ft_putstr("\nF6:");
	ft_putnbr(ft_strncmp("\200", "\0", 5));
	ft_putstr(" = S6:");
	ft_putnbr(strncmp("\200", "\0" , 5));
	ft_putstr("\nF7:");
	ft_putnbr(ft_strncmp("abc", "abc\0defg", 100));
	ft_putstr(" = S7:");
	ft_putnbr(strncmp("abc", "abc\0defg", 100));
	ft_putstr("\n\n|abc, abd, 2|\nF8:");
	ft_putnbr(ft_strncmp("abc", "abd", 2));
	ft_putstr(" = S8:");
	ft_putnbr(strncmp("abc", "abd", 2));
}
