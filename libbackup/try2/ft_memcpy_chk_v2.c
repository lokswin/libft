/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:36:17 by drafe             #+#    #+#             */
/*   Updated: 2019/05/28 15:40:38 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void                    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char		*dst_cast;
	unsigned char		*src_cast;
    size_t              i;

    dst_cast = (unsigned char *)dst;
    src_cast = (unsigned char *)src;
    i = 0;
    if (!dst && !src)
        return (0);
    while (n--)
    {
        *dst_cast++ = *src_cast++;
	}
    return (dst);
}

int				main()
{
	char src[] = "test basic du memccpy !";
	char buff1[22];
	char buff2[22];
	char *r1 = memcpy(buff1, src, 22);
	char *r2 = ft_memcpy(buff2, src, 22);
	int i;
	i = 0;

	ft_putstr("\nr1:|");	
	ft_putstr(buff1);
	ft_putstr("|\nr2:|");
	ft_putstr(buff2);
	ft_putstr("|\nr1-r2:");
	ft_putnbr(buff1-buff2);
	while (i < 33)
	{
		ft_putstr("\n|r1:");
		ft_putnbr(r1[i]);
		ft_putstr("|r2:");
		ft_putnbr(r2[i]);
	
	i++;
	}

	if (r1 == r2)
		ft_putstr("PASSSSSSSED");
}
