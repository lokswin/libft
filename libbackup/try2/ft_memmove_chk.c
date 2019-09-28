/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_chk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 17:49:12 by drafe             #+#    #+#             */
/*   Updated: 2019/05/28 17:06:46 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void                *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char   *cast_dst;
    unsigned char   *cast_src;
    size_t          i;

    i = 0;
	if (!dst && !src)
		return (0);
	cast_dst = (unsigned char *)dst;
    cast_src = (unsigned char *)src;
    while (len--)
    {
        cast_dst[i] = cast_src[i];
        i++;
    }
    return (dst);
}

int				main()
{
	char		dst[4];
	char        dst2[4];
	char        dst3[4];
    char        dst4[4];
	const char  *src;

	src = "abcd";
	dst3[0] = 'z';
	dst4[0] = 'z';
	ft_putstr("|[2], abcd, 2|\nF:");
	ft_putstr(ft_memmove(dst, src, 2));
	ft_putstr("\nS:");
	ft_putstr(memmove(dst2, src, 2));
	ft_putstr("\n\n|z. , abcd, 2|\nF:");
    ft_putstr(ft_memmove(dst3, src, 2));
    ft_putstr("\nS:");
    ft_putstr(memmove(dst4, src, 2));
	ft_putstr("\n\n|0, 0, 5|\nF:");
	ft_putstr(ft_memmove(((void *)0), ((void *)0), 5));
	ft_putstr("\nS:");
	ft_putstr(memmove(((void *)0), ((void *)0), 5));
	ft_putstr("\n\n|0, 0, 0|\nF:");
	ft_putstr(ft_memmove(((void *)0), ((void *)0), 0));
	ft_putstr("\nS:");
	ft_putstr(memmove(((void *)0), ((void *)0), 0));
}
