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
	char 		*ptr;
	char		*ret;
	char		str2[] = "*Hello*";

	s = "abc";
	str = "Un jour je serai, le meilleur dresseur !";
	ft_putstr("\n\n\t\tSTRSUB TEST STARTED!!!\t\t\n\n");
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
	ft_putstr("\n\n|[abc], 3, 3|(_)F9:");
	ft_putstr(ptr = ft_strsub("abc", 3, 3));
	if (ptr[4] == '\0')
		ft_putstr("(success)");

	ft_putstr("\n\n|NULL, 0, 0|(_)F10:");
	if (ft_strsub(NULL, 0, 0) == NULL)
		ft_putstr("SUCC");
	ft_putstr(ft_strsub(NULL, 0, 0));
	ft_putstr("\n\n|NULL, 1, 0|(_)F11:");
	ft_putstr(ft_strsub(NULL, 1, 0));
	ft_putstr("\n\n|NULL, 1, 1|(_)F12:");
	ft_putstr(ft_strsub(NULL, 1, 1));
	ft_putstr("\n\n|NULL, 0, 1|(_)F13:");
	ft_putstr(ft_strsub(NULL, 0, 1));

	ret = ft_strsub(str2, 1, 5);
	ft_putstr("\n\n|*Hello*, 1, 5|(Hello)F14:");
	ft_putstr(ret);
	if (strcmp(ret, "Hello") != 0)
		ft_putstr("\nF14ERROR");
	ret = ft_strsub(str2, 3, 1);
	ft_putstr("\n\n|*Hello*, 3, 1|(l)F15:");
	ft_putstr(ret);
    if (strcmp(ret, "l") != 0)
    {
		ft_putstr("\nF15ERROR");
    }


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
//  make re; gcc -Wall -Wextra -Werror -g ft_strsub_chk.c libft.a;./a.out
}