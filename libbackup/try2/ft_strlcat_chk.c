/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_chk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 18:58:38 by drafe             #+#    #+#             */
/*   Updated: 2019/05/29 20:29:49 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main()
{
	char		dst[3];// = "123456\0";
	const char	*src;
	char        dst2[3];// = "123456\0";
	const char	*src2;
	char        dest[50] = {0};
    char        dest2[50] = {0};
    size_t      i, f, s;
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff11[0xF00] = "there is no stars in the sky";
	char buff22[0xF00] = "there is no stars in the sky";
	size_t max = 1000;

	dst[0] = 'a';
	dst2[0] = 'a';
	src = "z";
	src2 = "z";
	ft_putstr("|a.., z, 2|\nF:");
	ft_putnbr(ft_strlcat(dst, src, 2));
	ft_putstr(dst);
	ft_putstr("|\nS:");
	ft_putnbr(strlcat(dst2, src2, 2));
	ft_putstr(dst2);
	ft_putstr("|\n\n|there is no stars in the sky,the cake is a lie !\\0I'm hidden lol\\r\\n, 1000|\nF2:");
    ft_putnbr(ft_strlcat(buff11, str , max));
    ft_putstr(buff11);
	ft_putstr("|\nS2:");
    ft_putnbr(strlcat(buff22, str, max));
	ft_putstr(buff22);
	ft_putstr("|\n\n|abc, xyz, 2|\nF3:");
    ft_putnbr(ft_strlcat("abc", "xyz" , 2));
    ft_putstr("\nS3:");
    ft_putnbr(strlcat("abc", "xyz", 2));
	
	if (strlcat(dest, "Hello ", 4) != ft_strlcat(dest2, "Hello ", 4))
	{
        ft_putstr("\n\n|Hello , 4|error1");
		ft_putstr("\nS__dest: |");
        ft_putstr(dest);
        ft_putstr("|\nF_dest2: |");
        ft_putstr(dest2);
	}
    memset(dest, 0, sizeof(dest));
    memset(dest2, 0, sizeof(dest));
    s = strlcat(dest, "Hello ", 4);
    f = ft_strlcat(dest2, "Hello ", 4);
    if (strcmp(dest, dest2) != 0 || f != s)
    {
        ft_putstr("|\n\n|dest2 = 0, Hello , 4|error2");
        ft_putstr("\nS__dest: |");
        ft_putstr(dest);
        ft_putstr("|\nF_dest2: |");
        ft_putstr(dest2);
        ft_putstr("|\n_rets:");
        ft_putnbr(s);
        ft_putnbr(f);
    }
	s = strlcat(dest, "Hello ", 1);
	f = ft_strlcat(dest2, "Hello ", 1);
	
	if (strcmp(dest, dest2) != 0 || f != s)
	{
		ft_putstr("|\n\n|dest2, Hello , 1|error3");
		ft_putstr("\nS__dest: |");
		ft_putstr(dest);
		ft_putstr("|\nF_dest2: |");
		ft_putstr(dest2);
		ft_putstr("|\n_rets:");
		ft_putnbr(s);
		ft_putnbr(f);
	}
	i = 0;
	while (i < 6)
	{
		dest[4 + i] = 'z';
		dest2[4 + i] = 'z';
		++i;
	}
	s = strlcat(dest, "abc", 6);
	f = ft_strlcat(dest2, "abc", 6);
	if (strcmp(dest, dest2) != 0 || f != s)
	{
		ft_putstr("|\n\n|dest2, abc , 5|error4");
		ft_putstr("\nS__dest: |");
		ft_putstr(dest);
		ft_putstr("|\nF_dest2: |");
		ft_putstr(dest2);
		ft_putstr("|\n_rets:");
		ft_putnbr(s);
		ft_putnbr(f);
	}
}
