/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_chk.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 19:44:01 by drafe             #+#    #+#             */
/*   Updated: 2019/05/30 17:40:20 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main(void)
{
	char		**out2;
	char		**out3;
	char		**out4;
	char		**out5;
	char		**out6;
	char		**out7;

	ft_putstr("|*hello fel*low***stu_den*ts*|");
	out2 = ft_strsplit("*hello fel*low***stu_den*ts*", '*');
	ft_putstr("\n|\nout2[0]:");
	ft_putstr(out2[0]);
	ft_putstr("|\nout2[1]:");
	ft_putstr(out2[1]);
	ft_putstr("|\nout2[2]:");
	ft_putstr(out2[2]);
	ft_putstr("|\nout2[3]:");
	ft_putstr(out2[3]);
	ft_putstr("|\nout2[4]:");
	ft_putstr(out2[4]);
	ft_putstr("|\n\n|he*|\n|");
	ft_putstr(*ft_strsplit("he*", '*'));
	ft_putstr("|\n\n|split  ||this|for|me|||||!||:");
	free(out2);
	out5 = ft_strsplit("split  ||this|for|me|||||!|", '|');
	ft_putstr("\n|\nout5[0]:");
	ft_putstr(out5[0]);
	ft_putstr("|\nout5[1]:");
	ft_putstr(out5[1]);
	ft_putstr("|\nout5[2]:");
	ft_putstr(out5[2]);
	ft_putstr("|\nout5[3]:");
	ft_putstr(out5[3]);
	ft_putstr("|\nout5[4]:");
	ft_putstr(out5[4]);
	ft_putstr("|\nout5[5]:");
	ft_putstr(out5[5]);
	ft_putstr("|\n\n|check@out|");
	free(out5);
	out3 = ft_strsplit("check@out", '@');
	ft_putstr("\n|\nout3[0]:");
	ft_putstr(out3[0]);
	ft_putstr("|\nout3[1]:");
	ft_putstr(out3[1]);
	ft_putstr("|\nout3[2]:");
	ft_putstr(out3[2]);
	ft_putstr("|\n\n|@ out|\n|");
	ft_putstr(*ft_strsplit("@ out", '@'));
	ft_putstr("|\n\n|@ out@@@@check|");
	free(out3);
	out4 = ft_strsplit("@ out@@@@check", '@');
	ft_putstr("\n|\nout4[0]:");
	ft_putstr(out4[0]);
	ft_putstr("|\nout4[1]:");
	ft_putstr(out4[1]);
	ft_putstr("|\nout4[2]:");
	ft_putstr(out4[2]);
	ft_putstr("|\n\n|olol                     |\n|");
	ft_putstr(*ft_strsplit("olol                     ", ' '));
	ft_putstr("|\n\n|DONTSPLIT|\n|");
	ft_putstr(*ft_strsplit("DONTSPLIT", '*'));
	ft_putstr("|\n|NULL|\n|");
	free(out4);
	out6 = ft_strsplit(NULL, '*');
	ft_putstr("splitpass");
	free(out6);
	ft_putstr("|\n\n|g*hel*lo*f, *|\n|");
	out7 = ft_strsplit("g*hel*lo*f", '*');
	ft_putstr("\n|\nout7[0]:");
    ft_putstr(out7[0]);
    ft_putstr("|\nout7[1]:");
    ft_putstr(out7[1]);
	ft_putstr("|\nout7[2]:");
    ft_putstr(out7[2]);
	ft_putstr("|\nout7[3]:");
    ft_putstr(out7[3]);
    ft_putstr("|\nout7[4]:");
    ft_putstr(out7[4]);
	ft_putstr("|\nout7[5]:");
    ft_putstr(out7[5]);
	free(out7[0]);
	free(out7[1]);
	free(out7[2]);
    free(out7[3]);
	free(out7[4]);
    free(out7[5]);
	ft_putstr("\n\n\n_____________________________");
}
