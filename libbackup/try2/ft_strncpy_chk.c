/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_chk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 18:06:46 by drafe             #+#    #+#             */
/*   Updated: 2019/05/28 18:35:17 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     main()
{
    char src[]="src";
    char dst[]="dst";
	char src2[]="src";
    char dst2[]="dst";
	char *src3 = "--> nyancat <--\n\r";
	char dst3[30];

	__builtin___memset_chk (dst3, 'B', sizeof(dst3), __builtin_object_size (dst3, 0));
	char *r1 = __builtin___strncpy_chk (dst3, src3, 12, __builtin_object_size (dst3, 2 > 1 ? 1 : 0));
	ft_putstr(dst3);
	char *r2 = ft_strncpy(dst3, src3, 12);
	
	ft_putstr(dst3);
	ft_putstr("\nr1:");
	ft_putstr(r1);
	ft_putstr("\nr2:");
	ft_putstr(r2);
	if (r1 != r2)
		ft_putstr("TEST_FAILED");
	ft_putstr("TEST_SUCCESS");
	ft_putstr("\n\n|dst, src|\nF1:");
    ft_strncpy(dst,src,1);
    ft_putstr(dst);
	ft_putstr("|\nS:");
    strncpy(dst2,src2,1);
    ft_putstr(dst2);
    return 0;
}
