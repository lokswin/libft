/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_chk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 17:31:21 by drafe             #+#    #+#             */
/*   Updated: 2019/05/30 18:08:14 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main()
{
	char *s1 = "my favorite animal is";
	char *s2 = " ";
	char *s3 = "the nyancat";
	char *s4 = "where is my ";
	char *s5 = "malloc ???";
	char *res = ft_strjoin(ft_strjoin(s1, s2), s3);
	
	ft_putstr("|s1(my favorite animal is), s2(_)-> s3(the nyancat)|F1:\n|");
	ft_putstr(res);
	ft_putstr("|\n\n|1,2|F2:\n|");
	ft_putstr(ft_strjoin("1", "2"));
	ft_putstr("|\n\n|abc,bcdef|F3:\n|");
    ft_putstr(ft_strjoin("abc", "bcdef"));
	ft_putstr("|\n\n|bcdef,abc|F3.1:\n|");
    ft_putstr(ft_strjoin("bcdef", "abc"));
	ft_putstr("|\n\n|rtx,35=@-|F4:\n|");
	ft_putstr(ft_strjoin("rtx", "35=@-"));
	ft_putstr("|\n\n|malloc ???, where is my|F5:\n|");
	char *res2 = ft_strjoin(s4, s5);
	ft_putstr(res2);
	if (res2 == ((void *)0))
		ft_putstr("success where is my malloc ???");
	ft_putstr("\n\n|a, NULL|F6:\n|");
    ft_putstr(ft_strjoin("a", NULL));
	ft_putstr("|\n\n|NULL, NULL|F7:\n|");
    ft_putstr(ft_strjoin(NULL, NULL));
	ft_putstr("|\n\n|NULL, a|F8:\n|");
    ft_putstr(ft_strjoin(NULL, "a"));
	free(res);
	free(res2);
	res = NULL;
	res2 = NULL;
/*

F1:my favorite animal is the nyancat

|1,2|
|12

|abc,bcdef|
|abcbcdef

|rtx,35=@-|
|rtx35=@-

|a, NULL|
F:a

|NULL, NULL|
F:

|NULL, a|
F:%  

make re; gcc -Wall -Wextra -Werror -g ft_strjoin_chk.c libft.a;./a.out*/
}
