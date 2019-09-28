/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 19:09:47 by drafe             #+#    #+#             */
/*   Updated: 2019/05/21 17:17:13 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strchr(const char *s, int c)
{
	size_t		i;

	i = 0;
	while (*s != c)
	{
		if ((*s == '\0') && c != '\0')
			return (0);
		s++;
	}
	return ((char*)s);
}

int				main(int argv, char **argc)
{
	const char	*s1;
	const char	*s2;

	argv = argv + 1 - 1;
	argc[1] = argc[1];
	s1 = "abde\0fcgklmniprstuxyz";
	s2 = "abde\0fcgklmniprstuxyz";
	ft_putstr("F:");
	ft_putstr(ft_strchr(s1, 'z'));
	ft_putstr("\nS:");
	ft_putstr(strchr(s2,'z'));
	ft_putstr("\nF2:");
	ft_putstr(ft_strchr("\0", 'a'));
	ft_putstr("\nS2:");
	ft_putstr(strchr("\0", 'a'));
	ft_putstr("\nF3:");
	ft_putstr(ft_strchr("123456789", 'a'));
	ft_putstr("\nS3:");
	ft_putstr(strchr("123456789", 'a'));
	ft_putstr("\nF4:");
	ft_putstr(ft_strchr("12a34567a89", 'a'));
	ft_putstr("\nS4:");
	ft_putstr(strchr("12a34567a89", 'a'));
}
