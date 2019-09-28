/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 18:17:58 by drafe             #+#    #+#             */
/*   Updated: 2019/05/12 18:36:00 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	return (s1 = ft_strncat(s1, s2, ft_strlen(s2)));
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
	ft_putstr(ft_strcat(dst, src));
	ft_putstr("\nS:");
	ft_putstr(strcat(dst2, src2));
}
