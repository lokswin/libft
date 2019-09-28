/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_chk.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 19:44:01 by drafe             #+#    #+#             */
/*   Updated: 2019/05/16 17:35:26 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_str_find_n(char const *s, char c)
{
	size_t		n;
	size_t		i;
	size_t		delimiter;
	size_t		len;

	n = 0;
	i = 0;
	len = 0;
	delimiter = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			delimiter++;
		else
			delimiter = 0;
		if (delimiter == 0)
			len++;
		else
			len = 0;
		if (len == 1)
			n++;
		i++;
	}
	ft_putstr("n:");
	ft_putnbr(n);
	ft_putstr("\n");
	return (n);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;
	size_t	n;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	res = (char**)malloc(sizeof(char*) * ((n = ft_str_find_n(s, c)) + 1));
	res[n] = (char*)('\0');
	n = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if ((len != 0))
			{
				if (!(res[n] = (char*)malloc(sizeof(char) * (len + 1))))
					return (0);
				res[n][len] = '\0';
				while (len--)
				{
					res[n][j] = s[(i - 1) - len];
					j++;
				}
				n++;
				j = 0;
			}
			len = 0;
		}
		else
			len++;
		i++;
	}
	return (res);
}

int				main(void)
{
	char const	*s;
	char		**out;
	char		**out2;
	char        **out3;
	size_t		i;

	s = "abc";
	i = 0;
	ft_putstr("F1:");
	out = ft_strsplit("*12*34*56*", '*');
	ft_putstr(out[0]);
	ft_putchar('\n');
	ft_putstr(out[1]);
	ft_putchar('\n');
	ft_putstr(out[2]);
	ft_putstr("\nF2:");
	out2 = ft_strsplit("*he*llo*fel*low***stu*den*ts*", '*');
	ft_putstr(out2[0]);
	ft_putchar('\n');
    ft_putstr(out2[1]);
	ft_putchar('\n');
    ft_putstr(out2[2]);
	ft_putstr("\nF3:");
	out3 = ft_strsplit("a*bc*de*fg", '*');
    ft_putstr("\n0:");
	ft_putstr(out3[0]);
	ft_putstr("\n1:");
    ft_putstr(out3[1]);
	ft_putstr("\n2:");
    ft_putstr(out3[2]);
	ft_putstr("\n3:");
    ft_putstr(out3[3]);
	ft_putstr("\n4:");
    ft_putstr(out3[4]);


}
