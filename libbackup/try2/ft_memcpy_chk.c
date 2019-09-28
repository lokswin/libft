/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:36:17 by drafe             #+#    #+#             */
/*   Updated: 2019/05/25 19:05:12 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main()
{
	char		dst1[22];
	char		dst2[22];

	ft_putstr("|test basic du memcpy !|\nF:");
	ft_putstr(ft_memcpy(dst1, "test basic du memcpy !", 22));
	ft_putstr("|\nS:");
	ft_putstr(memcpy(dst2, "test basic du memcpy !", 22));
	ft_putstr("|\n\n| , test basic du memcpy !, 0|\nF2:");
	ft_putstr(ft_memcpy("", "test basic du memcpy !", 0));
    ft_putstr("|\nS2:");
    ft_putstr(memcpy("", "test basic du memcpy !", 0));
	ft_putstr("|\n\n|0, 0, 0|\nF3:");
    ft_putstr(ft_memcpy(((void *)0), ((void *)0), 0));
    ft_putstr("|\nS3:");
    ft_putstr(memcpy(((void *)0), ((void *)0), 0));
	ft_putstr("|\n\n|0, 0, 3|\nF4:");    
//	ft_putstr(ft_memcpy(((void *)0), ((void *)0), 3));
	ft_putstr("|\nS4:");
	ft_putstr(memcpy(((void *)0), ((void *)0), 3));	
}
