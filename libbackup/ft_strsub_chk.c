/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 16:41:36 by drafe             #+#    #+#             */
/*   Updated: 2019/05/14 18:48:24 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main(void)
{
	char const	*s;
	char		*str;

	s = "abc";
	str = "Un jour je serai, le meilleur dresseur !";
	ft_putstr("|[123456], 2, 2|(34)F1:");
	ft_putstr(ft_strsub("123456", 2, 2));
	ft_putstr("\n\n|[123\\0abc], 2, 2|(3)F2:");
    ft_putstr(ft_strsub("123\0abc", 2, 2));
	ft_putstr("\n\n|[\\099999], 2, 2|(_)F3:");
    ft_putstr(ft_strsub("\099999", 2, 2));
	ft_putstr("\n\n|[\\0\\0\\0\\0\\0], 1, 1|(_)F4:");
    ft_putstr(ft_strsub("\0\0\0\0\0", 1, 1));
	ft_putstr("\n\n|[abc], 0, 0|(_)F5:");
    ft_putstr(ft_strsub("abc", 0, 0));
	ft_putstr("\n\n|[123], 2, 2|(3)F6:");
    ft_putstr(ft_strsub("123", 2, 2));
	ft_putstr("\n\n|[], 2, 2|(_)F7:");
    ft_putstr(ft_strsub("", 2, 2));
	ft_putstr("\n\n|[abc], 2, 2|(c)F8:");
	ft_putstr(ft_strsub(s, 2, 2));

ft_putstr("\n\n[Un jour je serai, le meilleur dresseur !], 0, (size_t)-10 == NULL)");
if (ft_strsub(str, 0, (size_t)-10) == NULL)
	ft_putstr("==NULL(success)");

ft_putstr("\n\nstr:=");
ft_putstr(str);
ft_putstr("\nstrcmp(ft_strsub(str, 8, 8), [je serai])==0");
ft_putnbr(strcmp(ft_strsub(str, 8, 8), "je serai"));

ft_putstr("\n\nstr:=");
ft_putstr(str);
ft_putstr("\nstrcmp(ft_strsub(str, 8, 8), [])==0");
ft_putnbr(strcmp(ft_strsub(str, 0, 0), ""));
//make re; gcc -Wall -Wextra -Werror -g ft_strsub_chk.c libft.a;./a.out
}