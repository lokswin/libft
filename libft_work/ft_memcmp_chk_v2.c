/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 20:34:40 by drafe             #+#    #+#             */
/*   Updated: 2019/05/25 20:44:38 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main()
{
	char *s1 = "\xff\xaa\xde\x12";
	char *s2 = "\xff\xaa\xde\x12MACOSAAAAA";
	int i1 = memcmp(s1, s2, 4);
	int i2 = ft_memcmp(s1, s2, 4);
	
	ft_putnbr(i1);
	ft_putnbr(i2);
	if (i1 == i2)
		ft_putstr("TEST_SUCCESS");
	ft_putstr("TEST_FAILED");
}

	
