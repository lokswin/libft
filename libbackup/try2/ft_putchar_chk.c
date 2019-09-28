/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_chk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 17:52:03 by drafe             #+#    #+#             */
/*   Updated: 2019/05/28 19:12:09 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <locale.h>
#include <stdio.h>

int				main()
{
//	setlocale(LC_ALL, "en_US.utf8");

	int			c = L'√';
	char		*ptr;
	char		happy[] = { 0xe2, 0x98, 0xba };

	ptr = happy;
	ft_putstr("\n|notascii|\nF1:");
	ft_putchar(c);
	ft_putstr("\n\n|newline|\nF2:");
	ft_putchar('\n');
	ft_putstr("\n\n|%|\nF3:");
	ft_putchar('%');
	ft_putstr("\n\n|-|\nF4:");
	ft_putchar('-');
	ft_putstr("\n\n|notascii|\nF5:");
	ft_putchar((char)0xbb);
	ft_putstr("\n\n|notascii|\nF6:");
	ft_putchar((char)(L'ð'));
	ft_putstr("\n\n|notascii|\nF7:");
    ft_putchar(*ptr);
 
}
