/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy_chk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 20:04:49 by drafe             #+#    #+#             */
/*   Updated: 2019/05/27 18:30:35 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int main()
{
	char src[] = "test basic du memccpy !";
	char buff1[22];
	char buff2[22];
	char *r1 = __builtin___memccpy_chk (buff1, src, 'z', 22, __builtin_object_size (buff1, 0));
	char *r2 = ft_memccpy(buff2, src, 'z', 22);
	ft_putstr(r1);	
	ft_putnbr(__builtin_object_size (buff1, 0))	;
	ft_putstr(r2);
	
		
	if (r1 == r2)
	{
		ft_putstr("TEST_SUCCESS");
	}
}
