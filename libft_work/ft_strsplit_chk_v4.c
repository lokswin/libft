/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_chk.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 19:44:01 by drafe             #+#    #+#             */
/*   Updated: 2019/05/17 16:58:04 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			**ft_strsplit_res_out(char **res, char const *s, char c)
{
    size_t  i;
    size_t  j;
    size_t  n;
    size_t  len;

    i = 0;
    j = 0;
    len = 0;
	n = 0;
	while (i < ft_strlen(s) + 1)
    {
        if (s[i] != c && s[i] != '\0')
            len++;
        if ((len != 0) && ((s[i] == c) || (s[i] == '\0')))
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
            len = 0;
        }
        i++;
    }
	return (res);
}

static size_t		ft_strsplit_find_n(char const *s, char c)
{
	size_t			n;
	size_t			i;
	size_t			delimiter;
	size_t			len;

	n = 0;
	i = 0;
	len = 1;
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
	return (n);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	size_t	n;

	n = ft_strsplit_find_n(s, c);
	if (!(res = (char**)malloc(sizeof(char*) * (n + 1))))
		return (0);
	res[n] = (char*)'\0';
	return (ft_strsplit_res_out(res, s, c));
}

int				main(void)
{
	char		**out2;

	out2 = ft_strsplit("*he*llo*fel*low***stu*den*ts*", '*');
	ft_putstr(out2[0]);
	ft_putstr("	1:");
	ft_putstr(out2[1]);
	ft_putstr("	2:");
	ft_putstr(out2[2]);
	ft_putstr("	3:");
	ft_putstr(out2[3]);
	ft_putstr("	4:");
	ft_putstr(out2[4]);
	ft_putstr(" 5:");
	ft_putstr(out2[5]);
	ft_putstr(" 6:");
	ft_putstr(out2[6]);
	ft_putstr(" 7:");
	ft_putstr(out2[7]);
}
