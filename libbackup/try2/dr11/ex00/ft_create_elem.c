/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 17:03:17 by drafe             #+#    #+#             */
/*   Updated: 2019/02/13 19:33:11 by drafe            ###   ########.fr       */
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

int main(void)
{
	t_list *new_elem;
	new_elem = NULL;

	new_elem = ft_create_elem("cfdvwve@!#O$/1-;");
	new_elem = ft_create_elem("this is sparta");
	ft_print_list(new_elem);
	return (0);
}
