/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 18:58:28 by drafe             #+#    #+#             */
/*   Updated: 2019/05/25 19:27:56 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((size <= 0) || (size < (ft_strlen(s1) + ft_strlen(s2))))
	{
		ft_putstr("\ns1:");
		ft_putnbr(ft_strlen(s1));
		ft_putstr("s2:");
		ft_putnbr(ft_strlen(s2));
		return (ft_strlen(s1) + ft_strlen(s2));
}
		while (s1[i] != '\0')
		i++;
	while (i < size)
	{
		if (s2[j] == '\0')
		{
			i++;
			break ;
		}
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i - 1] = '\0';
	return (i);
}
