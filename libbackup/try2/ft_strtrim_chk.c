/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_chk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 16:20:46 by drafe             #+#    #+#             */
/*   Updated: 2019/05/30 18:42:46 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main()
{
	char const *s = NULL;

	ft_putstr("|\\t\\n  \\tAAA \\t BBB\\t\\n  \\t|\nF1:");
	ft_putstr(ft_strtrim("\t\n  \tAAA \t BBB\t\n  \t"));
	ft_putstr("\n\n|abc|\nF2:");
	ft_putstr(ft_strtrim("abc"));
	ft_putstr("\n\n|""|\nF3:");
	ft_putstr(ft_strtrim(""));
	ft_putstr("\n\n|\\t\\t\\n\\t\\t   |\nF4:");
	ft_putstr(ft_strtrim("\t\t\n\t\t   "));
	ft_putstr("\n\n|empty|\nF5:");
	ft_putnbr(strcmp(ft_strtrim(""), ""));
	ft_putstr("\n\n|NULL|\nF:");
    ft_strtrim(s);
	ft_putstr("\n\n|  vvv  |\nF:|");
    ft_putstr(ft_strtrim("   vvv   "));
	ft_putstr("|\n\n___________________________");
}
