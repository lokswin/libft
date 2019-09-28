/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc_chk.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 19:03:14 by drafe             #+#    #+#             */
/*   Updated: 2019/05/07 21:23:15 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void                *ft_memallocc(size_t size)
{
    unsigned char	*tmp;
    size_t			i;

	i = 0;
	if (!(tmp = malloc(size)))
		return (0);
	while (i < size)
    {
        tmp[i] = '\0';
        i++;
    }
    return (tmp);
}

int			main(int argv, char **argc)
{
	char	*s1;
	char	*s2;

	s1 = NULL;
	s2 = NULL;
	argv = argv - 1 + 1;
	argc[1] = argc[1];
	if (!(s1 = (char*)malloc(1)))
		return (0);
	if (!(s2 = (char*)ft_memallocc(1)))
		return (0);
	s1[0] = 'q';
	s2[0] = 'Z';
	s1[1] = 'q';
	s2[1] = 'Z';
	s1[2] = 'q';
	s2[2] = 'Z';
	ft_putstr("s1:");
	ft_putstr(s1);
	ft_putstr("\ns2:");
	ft_putstr(s2);
	free(s1);
	s1 = NULL;
	free(s2);
	s2 = NULL;
}
