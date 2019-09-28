/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 20:09:12 by drafe             #+#    #+#             */
/*   Updated: 2019/05/30 18:57:13 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_atoi_spaces(int c)
{
	if (c == '+')
		return (1);
	if (c == '\t' || c == '\n' || c == '\v'		\
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	int		res;
	int		sign;

	res = 0;
	sign = 1;
	while (ft_atoi_spaces(*str))
		str++;
	if ((*str == '-') && (str++))
		sign = sign * -1;
	while ((*str >= '0') && (*str <= '9'))
	{
		if (res > 214748364 || (res == 214748364 && ((*str) - '0') > 7))
		{
			if (sign == 1)
				return ((res * 10) + ((*str++) - '0'));
			else if (sign < 0 && res == 214748364)
				return (-2147483648);
			else
				return (0);
		}
		res = (res * 10) + ((*str++) - '0');
	}
	return (res * sign);
}
