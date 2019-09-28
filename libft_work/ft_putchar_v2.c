/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 19:42:54 by drafe             #+#    #+#             */
/*   Updated: 2019/05/25 18:07:17 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <stdio.h>       
#include <math.h>
void				ft_putchar(char c)
{
	unsigned char	cast;
	int				tmp;
	int				i;

	i = 0;
	cast = c;
	tmp = (int)c;
	if (!ft_isascii(c))
	{	
	}
	write(1, &cast, 1);
}
