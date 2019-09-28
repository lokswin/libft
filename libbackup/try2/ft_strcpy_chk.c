/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 16:01:14 by drafe             #+#    #+#             */
/*   Updated: 2019/05/28 17:44:02 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main()
{
	char *src = "--> nyancat <--\n\r";
	char dst1[30];

	__builtin___memset_chk (dst1, 'a', sizeof(dst1), __builtin_object_size (dst1, 0));
	char *r1 = __builtin___strcpy_chk (dst1, src, __builtin_object_size (dst1, 2 > 1 ? 1 : 0));
	char *r2 = ft_strcpy(dst1, src);
	ft_putstr(r1);
	ft_putstr("r2:");
	ft_putstr(r2);
	if (r1 != r2)
		ft_putstr("TEST_FAILED");
	char b[1];
	r1 = __builtin___strcpy_chk (b, "", __builtin_object_size (b, 2 > 1 ? 1 : 0));
	r2 = ft_strcpy(b, "");
	
	if (r1 != r2)
		ft_putstr("TEST_FAILED");
	ft_putstr("TEST_SUCCESS");
}
