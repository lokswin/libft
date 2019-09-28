/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_chk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 17:49:12 by drafe             #+#    #+#             */
/*   Updated: 2019/05/28 17:26:11 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void                *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char   *cast_dst;
    unsigned char   *cast_src;

	if (!dst && !src)
		return (0);
	cast_dst = (unsigned char *)dst;
    cast_src = (unsigned char *)src;
	if (src < dst)
	{
	
	ft_putstr("GAFFFF ");
	cast_dst += len;
	cast_src += len;
	while (len--)
		*--cast_dst = *--cast_src;
	}
	else
		while (len--)
			*cast_dst++ = *cast_src++;
    return (dst);
}

int				main()
{
	char dst1[0xF0];
	char dst2[0xF0];
	char *data = "thi√ü";
	int size = 0xF0 - 0xF;
	char str[] = "12345";

	__builtin___memset_chk (dst1, 'A', sizeof(dst1), __builtin_object_size (dst1, 0));
	__builtin___memset_chk (dst2, 'A', sizeof(dst2), __builtin_object_size (dst2, 0));
	__builtin___memcpy_chk (dst1, data, strlen(data), __builtin_object_size (dst1, 0));
	__builtin___memcpy_chk (dst2, data, strlen(data), __builtin_object_size (dst2, 0));
	__builtin___memmove_chk (dst1 + 3, dst1, size, __builtin_object_size (dst1 + 3, 0));

	ft_memmove(dst2 + 3, dst2, size);
	ft_putstr("dst1:\n");
	ft_putstr(dst1);
	ft_putstr("\n\n\ndst2:\n");
	ft_putstr(dst2);
	if (!memcmp(dst1, dst2, size))
		ft_putstr("\n\n\nTEST_SUCCESS\n\n");
	ft_putstr("\nTEST_FAILED");
	ft_putstr("\n\n|12345, 45, 2 |\nTEST2F:");
	ft_putstr(ft_memmove(str, str + 3, 2));
	ft_putstr(" ");
    ft_putstr(str);
	ft_putstr("\nS:");
	ft_putstr(memmove(str, str + 3, 2));
	ft_putstr(" ");
	ft_putstr(str);
}
