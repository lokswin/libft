/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 20:34:40 by drafe             #+#    #+#             */
/*   Updated: 2019/05/25 20:34:18 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main()
{
	char *s1 = "\xff\xaa\xde\x12WXYZ";
	char *s2 = "\xff\xaa\xde\x12MACOSX";
	ft_putstr("|a, b, 1|\nF:");
	ft_putnbr(ft_memcmp("a", "b", 1));
	ft_putstr("\nS:");
	ft_putnbr(memcmp("a", "b", 1));

	ft_putstr("\n\n|\\xff\\0\\0\\xaa\\0\\xde\\xffMACOSX\\xff, \\xff\\0\\0\\xaa\\0\\xde\\x00MBS,9|\nF2:");
	ft_putnbr(ft_memcmp("\xff\0\0\xaa\0\xde\xffMACOSX\xff", "\xff\0\0\xaa\0\xde\x00MBS",9));
	ft_putstr("\nS2:");
	ft_putnbr(memcmp("\xff\0\0\xaa\0\xde\xffMACOSX\xff", "\xff\0\0\xaa\0\xde\x00MBS",9));

	ft_putstr("\n\n|\\xff\\xaa\\xde\\x12WXYZ, \\xff\\xaa\\xde\\x12MACOSX , 7|\nF3:");
	ft_putnbr(ft_memcmp(s1, s2, 7));
	ft_putstr("\nS3:");
	ft_putnbr(memcmp(s1, s2, 7));
	ft_putstr("\n\n|atoms\\0\\0\\0\\0, atoms\\0abc, 8|\nF4:");
	ft_putnbr(ft_memcmp("atoms\0\0\0\0", "atoms\0abc", 8));
	ft_putstr("\nS4:");
	ft_putnbr(memcmp("atoms\0\0\0\0", "atoms\0abc", 8));
}
