/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_chk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 18:15:56 by drafe             #+#    #+#             */
/*   Updated: 2019/05/12 18:15:57 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (n--)
	{
		if (s2[j] == '\0')
			break ;
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

int				main(int argv, char **argc)
{
	char		dst[3];// = "123456\0";
	const char	*src;
	char        dst2[3];// = "123456\0";
	const char	*src2;

	argv = argv + 1 - 1;
	argc[1] = argc[1];
	dst[0] = 'a';
	dst2[0] = 'a';
	src = "";
	src2 = "";
	ft_putstr("F:");
	ft_putstr(ft_strncat(dst, src, 2));
	ft_putstr("\nS:");
	ft_putstr(strncat(dst2, src2, 2));
}
