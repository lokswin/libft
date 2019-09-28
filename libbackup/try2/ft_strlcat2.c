/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 18:58:28 by drafe             #+#    #+#             */
/*   Updated: 2019/05/29 19:13:37 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t			ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		s1_len;
	size_t		s2_len;
	size_t		n;

	j = 0; 
	i = 0;
	n = size;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	while ((n-- != 0) && s1[i] != '\0')
		i++;

	s1_len = i - s1_len;
	n = size - s1_len;
	if (n == 0)
		return (s1_len + s2_len);
	while (s2[j] != '\0')
	{
		if (n != 1)
		{
			s1[i] = s2[j];
			i++;
			n--;
		}
		j++;
	}
	s1[i] = '\0';
	ft_putnbr(j);
	return (s1_len + (j - s2_len));
}
