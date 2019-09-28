/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 19:55:05 by drafe             #+#    #+#             */
/*   Updated: 2019/05/30 18:07:18 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char			*res;
	size_t			len_s1;
	size_t			len_s2;

	if ((!s2 || !s1) || (!s1 && !s2))
		return ((char*)s1);
	len_s1 = ft_strlen(s1) + 1;
	len_s2 = ft_strlen(s2);
	if (!(res = (char*)malloc(sizeof(char) * (len_s1 + len_s2))))
		return (0);
	len_s1 = len_s1 + len_s2 - 1;
	res[len_s1] = '\0';
	while (len_s1--)
	{
		if (len_s2 != 0)
			res[len_s1] = s2[--len_s2];
		else if (len_s2 == 0)
			res[len_s1] = s1[len_s1];
	}
	return (res);
}
