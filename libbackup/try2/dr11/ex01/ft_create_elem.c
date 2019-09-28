/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 17:03:17 by drafe             #+#    #+#             */
/*   Updated: 2019/02/13 21:16:31 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *tmp;
	

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp ->data = data;
		tmp ->next = NULL;
	}
	else
		return(0);

	return (tmp);
}
