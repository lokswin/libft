/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_chk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 16:20:46 by drafe             #+#    #+#             */
/*   Updated: 2019/05/10 15:34:48 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_count_n_t(char const *s, size_t n, int sign)
{
    while (((s[n] == ' ') || (s[n] == '\t')) || (s[n] == '\n'))
        n = n + (1 * sign);
    return (n);
}

char            *ft_strtrim(char const *s)
{
    char        *tmp_ptr;
    size_t      st;
    size_t      en;
    size_t      i;

    if (!s)
        return (0);
	st = 0;
	i = 0;
	en = ft_strlen(s);
    st = ft_count_n_t(s, st, 1);
	ft_putnbr(ft_strlen(s));
    en = ft_count_n_t(s, en, -1);
	ft_putnbr(st);
	ft_putstr("en:");
    ft_putnbr(en);
	i = en - st;
	if ((i * (-1)) > 0)
		i = 1;
	if (!(tmp_ptr = ((char*)malloc(i + 1))))
        return (0);
	i = 0;
    while (st < en)
    {
        tmp_ptr[i] = s[st];
        i++;
        st++;
    }
	tmp_ptr[i] = '\0';
    return (tmp_ptr);
}

int				main(int argv, char **argc)
{
	char const	*s1;

	s1 = argc[1];
	argv = argv + 1 - 1;
	ft_putstr(s1);
	ft_putstr("F1:");
	ft_putstr(ft_strtrim("\t\n  \tAAA \t BBB\t\n  \t"));
	ft_putstr("\nabcF2:");
	ft_putstr(ft_strtrim("abc"));
	ft_putstr("\n""F3:");
	ft_putstr(ft_strtrim(""));
	ft_putstr("\n/F4:");
	ft_putstr(ft_strtrim("\t\t\n\t\t   "));


}
