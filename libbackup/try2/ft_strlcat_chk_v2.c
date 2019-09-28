/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_chk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 18:58:38 by drafe             #+#    #+#             */
/*   Updated: 2019/05/25 19:36:35 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main()
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	size_t r1 = __builtin___strlcat_chk (buff1, str, max, __builtin_object_size (buff1, 2 > 1 ? 1 : 0));
	size_t r2 = ft_strlcat(buff2, str, max);

	if (r1 != r2)
		ft_putstr("TEST_FAILED");
	char s1[4] = "";
	char s2[4] = "";
	r1 = __builtin___strlcat_chk (s1, "thx to ntoniolo for this test !", 4, __builtin_object_size (s1, 2 > 1 ? 1 : 0));

	r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
	ft_putnbr(r1);
    ft_putnbr(r2);
	if (r1 != r2)
		ft_putstr("TEST_FAILED");
	ft_putstr("TEST_SUCCESS");
}
