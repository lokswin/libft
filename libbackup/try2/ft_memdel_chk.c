/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 20:06:11 by drafe             #+#    #+#             */
/*   Updated: 2019/05/21 21:08:58 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <libc.h>

int			main()
{
	void	*strv;

	strv = NULL;
	printf("%p=", strv);
	strv = ft_memalloc(4);
	printf("%p\n", strv);
	printf("%p=", strv);
	ft_memdel(&strv);
	printf("%p\n", strv);
}
