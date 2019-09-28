/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_chk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 17:31:21 by drafe             #+#    #+#             */
/*   Updated: 2019/05/30 18:08:14 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main()
{
	char *s1 = "my favorite animal is";
	char *s2 = " ";
	char *s3 = "the nyancat";
	char *s4 = "where is my ";
	char *s5 = "malloc ???";
	char *res = ft_strjoin(ft_strjoin(s1, s2), s3);
	
	ft_putstr("F1:");
	ft_putstr(res);
	ft_putstr("\n\n|1,2|\n|");
	ft_putstr(ft_strjoin("1", "2"));
	ft_putstr("\n\n|abc,bcdef|\n|");
    ft_putstr(ft_strjoin("abc", "bcdef"));
	ft_putstr("\n\n|rtx,35=@-|\n|");
	ft_putstr(ft_strjoin("rtx", "35=@-"));
	char *res2 = ft_strjoin(s5, s4);
	if (res2 == ((void *)0))
		ft_putstr("success where is my malloc ???");
	ft_putstr("\n\n|a, NULL|\nF:");
    ft_putstr(ft_strjoin("a", NULL));
	ft_putstr("\n\n|NULL, NULL|\nF:");
    ft_putstr(ft_strjoin(NULL, NULL));
	ft_putstr("\n\n|NULL, a|\nF:");
    ft_putstr(ft_strjoin(NULL, "a"));


}
