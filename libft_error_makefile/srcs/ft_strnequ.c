/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 21:00:41 by drafe             #+#    #+#             */
/*   Updated: 2019/05/14 18:12:10 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int				ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t		i;

	i = 0;
	if ((s1 == NULL) && (s2 == NULL))
		return (1);
	if ((n == 0) || (s1 == NULL) || (s2 == NULL))
		return (0);
	while ((n > i) && ((s1[i] != '\0') || (s2[i] != '\0')))
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
