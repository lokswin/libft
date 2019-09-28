/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 19:08:08 by drafe             #+#    #+#             */
/*   Updated: 2019/05/30 17:56:59 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main()
{
	const char	*s1;
	const char  *s2;

	s1 = "abdefgklmniprstuxyz";
	s2 = "abdefgklmniprstuxyz";
	ft_putstr("abdefgklmniprstuxyz, 99, 4|\nF:");
	ft_putstr(ft_memchr(s1, 99, 4));
	ft_putstr("\nS:");	
	ft_putstr(memchr(s2, 99, 4));
	ft_putstr("\n\n|NULL, 99, 0|\nF:");
	ft_putstr(ft_memchr(NULL, 99, 0));
    ft_putstr("\nS:");
    ft_putstr(memchr(NULL, 99, 0));
	ft_putstr("\n\n|NULL, 99, 3(Sseg=Fseg)|\nF:");
	ft_putstr(ft_memchr(NULL, 99, 3));
    ft_putstr("\nS:");
    ft_putstr(memchr(NULL, 99, 3));
}
