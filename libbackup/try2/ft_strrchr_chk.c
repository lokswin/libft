/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_chk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 20:08:29 by drafe             #+#    #+#             */
/*   Updated: 2019/05/23 19:36:03 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main(int argv, char **argc)
{
	const char	*s1;
	const char	*s2;

	argv = argv + 1 - 1;
	argc[1] = argc[1];
	s1 = "qabdEa\0qfcgklmniprstuxyz";
	s2 = "qabdEa\0qfcgklmniprstuxyz";
	ft_putstr("|qabdEa\\0qfcgklmniprstuxyz, \\0|\nF1:");
	ft_putstr(ft_strrchr(s1, '\0'));
	ft_putstr("\nS1:");
	ft_putstr(strrchr(s2,'\0'));
	ft_putstr("\n\n|\\0, a|\nF2:");
	ft_putstr(ft_strrchr("\0", 'a'));
	ft_putstr("\nS2:");
	ft_putstr(strrchr("\0", 'a'));
	ft_putstr("\n\n|123456789, a|\nF3:");
	ft_putstr(ft_strrchr("123456789", 'a'));
	ft_putstr("\nS3:");
	ft_putstr(strrchr("123456789", 'a'));
	ft_putstr("\n\n|12a34567a89, a|\nF4:");
	ft_putstr(ft_strrchr("12a34567a89", 'a'));
	ft_putstr("\nS4:");
	ft_putstr(strrchr("12a34567a89", 'a'));
	ft_putstr("\n\n|abbbbbbbb, a|\nF4:");
	ft_putstr(ft_strrchr("abbbbbbbb", 'a'));
	ft_putstr("\nS4:");
	ft_putstr(strrchr("abbbbbbbb", 'a'));
	ft_putstr("\n\n|there is so \\0ma\\0ny \\0 \\0 in t\\0his stri\\0ng !\\0\\0, \\0|\nF5:");
    ft_putstr(ft_strrchr("there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0", '\0'));
    ft_putstr("\nS5:");
    ft_putstr(strrchr("there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0", '\0'));
}
