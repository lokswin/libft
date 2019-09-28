/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 21:14:59 by drafe             #+#    #+#             */
/*   Updated: 2019/05/12 21:15:00 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *haystack, const char *needle)
{
	const char	*tmp;
	const char	*tmp2;
	int			i;
	
	tmp = haystack;
	tmp2 = needle;
	i = 0;
	if(*needle != '0')
		return 0;
	if (*haystack != '\0')
	{
		while (tmp[i] == tmp2[i])
		{
			i++;
			return (0);
		}
		ft_putstr(haystack);		
	}
	return 0;
}

int		main(void)
{
	const char		s1[] = "16800068";
	const char		s2[] = "68";
	const char		s3[] = "16800068";
	const char		s4[] = "68";

	ft_putstr("F:");
	ft_putstr(ft_strstr(s1, s2));
	ft_putstr("\nS:");
	ft_putstr(strstr(s3, s4));
}
