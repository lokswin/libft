/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy_chk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 20:04:49 by drafe             #+#    #+#             */
/*   Updated: 2019/05/27 18:46:03 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main()
{
	char		dst1[5];
	char        dst2[5];
	const char  *src2;
	char src[] = "test basic !";
	char buff1[] = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff2[] = "the cake is a lie !\0I'm hidden lol\r\n";
	char src3[] = "test basic du memccpy !";
	char buff3[22];
	char buff4[22];
	char *r1 = ft_memccpy(buff3, src3, 'z', 22);
    char *r2 = __builtin___memccpy_chk (buff4, src3, 'z', 22, __builtin_object_size (buff4, 0));

	dst1[0] = 'a';
	dst2[0] = 'a';
    src2 = "qbcd";
	ft_putstr("|a+4, qbcd, c, 3|\nF:");
	ft_putstr(ft_memccpy(dst1, src2, 'c', 3));
	ft_putstr("\ndst1:");
	ft_putstr(dst1);
	ft_putstr("\nS:");
	ft_putstr(memccpy(dst2, src2, 'c', 3));
	ft_putstr("\ndst2:");
	ft_putstr(dst2);
	ft_putstr("\n\n|the cake is a lie !\\0I'm hidden lol\\r\\n, test basic !, ' '|\nF2:");
	ft_putstr(ft_memccpy(buff1, src, ' ', ft_strlen(src)));
	ft_putstr("\nbuff1:");
	ft_putstr(buff1);
	ft_putstr("\nS:");
	ft_putstr(memccpy(buff2, src, ' ', ft_strlen(src)));
	ft_putstr("\nbuff2:");
	ft_putstr(buff2);
	ft_putstr("\n\n|[22], test basic du memccpy !, z, 22|\nF4:");
	ft_putstr(r1);
    ft_putstr("|\nbuff3:");
    ft_putstr(buff3);
    ft_putstr("|\nS:");
	ft_putstr(r1);
    ft_putstr("|\nbuff4:");
    ft_putstr(buff4);
	if (r1 == r2)
		ft_putstr("|TEST_SUCCESS");
}
