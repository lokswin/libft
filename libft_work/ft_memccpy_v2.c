/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 16:34:39 by drafe             #+#    #+#             */
/*   Updated: 2019/05/19 18:49:42 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = dst;
	if (!tmp[i])
		i++;
	if (n > i)
		return (0);
	i = 0;
	while (i < n)
		{
			if (ft_memchr(src, c, i))
				break ;
			i++;
		}
		ft_memcpy(dst, src, i);
		return (0);
}
