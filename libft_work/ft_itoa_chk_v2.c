/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_chk.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 20:07:53 by drafe             #+#    #+#             */
/*   Updated: 2019/05/17 21:18:54 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*s;
	int		i; 
	int		sign;
	int		tmp;
	int		size;

	i = 0;
	sign = n;
	size = 2;
	if (sign < 0)
		n =-n;
	tmp = n;	
	while ((tmp = (tmp / 10)) > 0)
        size++;
	if (!(s = (char*)malloc(sizeof(char) * size)))
        return (0);
	if (sign < 0)
		s[i++] = '-';
	s[size - 1] = '\0';
	while ((n /= 10) > 0)
	{
		ft_putstr("i:");
		ft_putnbr(i);
		s[i] = n % 10 + '0';
	}
    return (s);
}

int			main(void)
{
	ft_putstr("F1:");
	ft_putstr(ft_itoa(45));
	ft_putstr("\nF2:");
	ft_putstr(ft_itoa(-45));
	ft_putstr("\nF3:");
    ft_putstr(ft_itoa(1234567890));
	ft_putstr("\nF4:");
    ft_putstr(ft_itoa(0));
}
