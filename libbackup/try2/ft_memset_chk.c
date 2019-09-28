/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 18:13:31 by drafe             #+#    #+#             */
/*   Updated: 2019/05/07 17:36:53 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(int argv, char **argc)
{
	int		a1;
	int		a2;
	int		*ptr1;
	int		*ptr2;

	a1 = 9673;
	a2 = 9673;
	ptr1 = &a1;
	ptr2 = &a2;
	argv = argv - 1 + 1;
	argc[1] = argc[1];
	ft_putstr("F:");
	ft_putnbr(*((int*)ft_memset(NULL, 52, 2)));
	ft_putstr("\nS:");
	ft_putnbr(*((int*)memset(NULL, 52, 2)));
}
