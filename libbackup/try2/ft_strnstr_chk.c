/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_chk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 16:38:06 by drafe             #+#    #+#             */
/*   Updated: 2019/05/28 21:20:41 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	ft_putstr("|1680689, 9, 20|\nF1:");
	ft_putstr(ft_strnstr("1680689", "9", 20));
	ft_putstr("\nS1:");
	ft_putstr(strnstr("1680689", "9", 20));
	ft_putstr("\n\n|1680689, 689, 20|\nF2:");
    ft_putstr(ft_strnstr("1680689", "689", 20));
    ft_putstr("\nS2:");
    ft_putstr(strnstr("1680689", "689", 20));
	ft_putstr("\n\n|1680689, 8, 20|\nF3:");
    ft_putstr(ft_strnstr("1680689", "8", 20));
    ft_putstr("\nS3:");
    ft_putstr(strnstr("1680689", "8", 20));
	ft_putstr("\n\n|1680689, 9, 6|\nF4:");
    ft_putstr(ft_strnstr("1680689", "9", 6));
    ft_putstr("\nS4:");
    ft_putstr(strnstr("1680689", "9", 6));
	ft_putstr("\n\n|1680689, 1, 20|\nF5:");
    ft_putstr(ft_strnstr("1680689", "1", 20));
    ft_putstr("\nS5:");
    ft_putstr(strnstr("1680689", "1", 20));
	ft_putstr("\n\n|1680689, 7, 20|\nF6:");
    ft_putstr(ft_strnstr("1680689", "7", 20));
    ft_putstr("\nS6:");
    ft_putstr(strnstr("1680689", "7", 20));
	ft_putstr("\n\n|ababc, abc, 8|\nF7:");
    ft_putstr(ft_strnstr("ababc", "abc", 8));
    ft_putstr("\nS7:");
	ft_putstr(strnstr("ababc", "abc", 8));
	ft_putstr("\n\n|MZIRIBMZIRIBMZP|\nF8:");
    ft_putstr(ft_strnstr("MZIRIBMZIRIBMZP", "MZIRIBMZP", 24));
	ft_putstr("\nS8:");
	ft_putstr(strnstr("MZIRIBMZIRIBMZP", "MZIRIBMZP", 24));
	ft_putstr("\n\n|MMMMM, MMMMM, 5|\nF9:");
	ft_putstr(ft_strnstr("MMMMM", "MMMMM", 5));
	ft_putstr("\nS9:");
	ft_putstr(strnstr("MMMMM", "MMMMM", 5));
/*	ft_putstr("\n\n|MZIRIBMZIRIBMZP, MZIRIBMZP, 30|\nF10:");
    ft_putstr(ft_strnstr("MZIRIBMZIRIBMZP", "MZIRIBMZP", 30));
    ft_putstr("\nS10:");
    ft_putstr(strnstr("MZIRIBMZIRIBMZP", "MZIRIBMZP", 30));
*/	ft_putstr("\n\n|MZIRIBMZIRIBMZE123, MZIRIBMZE, 9|\nF11:");
    ft_putstr(ft_strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", 9));
    ft_putstr("\nS11:");
    ft_putstr(strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", 9));
	ft_putstr("\n\n|Hello les genw, Hello, 6|\nF12:");
	ft_putstr(ft_strnstr("Hello les genw", "Hello", 6));
	ft_putstr("\nS12:");
	ft_putstr(strnstr("Hello les genw", "Hello", 6));

	ft_putstr("\n\n|Hello les genw, Hello, 3|\nF13:");
	ft_putstr(ft_strnstr("Hello les genw", "Hello", 3));
	ft_putstr("\nS13:");
	ft_putstr(strnstr("Hello les genw", "Hello", 3));

	ft_putstr("\n\n|Hello les genw, Hello, 1|\nF14:");
    ft_putstr(ft_strnstr("Hello les genw", "les", 1));
	ft_putstr("\nS14:");
	ft_putstr(strnstr("Hello les genw", "les", 1));
    

}
