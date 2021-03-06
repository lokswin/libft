/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 16:39:49 by drafe             #+#    #+#             */
/*   Updated: 2019/06/07 19:52:37 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*res;

	if (size > size + 1)
		return (0);
	if (!(res = (char*)ft_memalloc(sizeof(char) * size + 1)))
		return (0);
	res[size] = '\0';
	return (res);
}
