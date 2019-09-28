/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_chk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 18:58:38 by drafe             #+#    #+#             */
/*   Updated: 2019/05/29 16:38:42 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main()
{
	char        dest[50] = {0};
    char        dest2[50] = {0};
    size_t      i, f, s;

    if (strlcat(dest, "Hello ", 4) != ft_strlcat(dest2, "Hello ", 4))
        ft_putstr("error1");
	memset(dest, 0, sizeof(dest));
    memset(dest2, 0, sizeof(dest));
    s = strlcat(dest, "Hello ", 4);
    f = ft_strlcat(dest2, "Hello ", 4);
    if (strcmp(dest, dest2) != 0 || f != s)
	{
        ft_putstr("\n\n|dest2 = 0, Hello , 4|error2");
		ft_putstr("\nS__dest: |");
		ft_putstr(dest);
		ft_putnbr(ft_strlen(dest));
		ft_putstr("|\nF_dest2: |");
		ft_putstr(dest2);
		ft_putnbr(ft_strlen(dest2));
		ft_putstr("|\n_rets:");
		ft_putnbr(s);
		ft_putnbr(f);
	}
	s = strlcat(dest, "Hello ", 1);
    f = ft_strlcat(dest2, "Hello ", 1);

    if (strcmp(dest, dest2) != 0 || f != s)
	{
        ft_putstr("\n\n|dest2, Hello , 1|error3");
		ft_putstr("\nS__dest: |");
        ft_putstr(dest);
		ft_putnbr(ft_strlen(dest));
        ft_putstr("|\nF_dest2: |");
        ft_putstr(dest2);
		ft_putnbr(ft_strlen(dest2));
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
		ft_putstr("\n\n|dest2, abc , 5|error4");
		ft_putstr("\nS__dest: |");
        ft_putstr(dest);
		ft_putnbr(ft_strlen(dest));
        ft_putstr("|\nF_dest2: |");
        ft_putstr(dest2);
		ft_putnbr(ft_strlen(dest2));
		ft_putstr("|\n_rets:");
        ft_putnbr(s);
        ft_putnbr(f);
	}
	ft_putstr("\n\n\n\n|______SUCCESS________");
}
