/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 20:45:28 by drafe             #+#    #+#             */
/*   Updated: 2019/02/13 22:04:27 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	tmp = *begin_list;
	if (tmp && begin_list)
	{
		tmp ->next = NULL;
		tmp ->data = data;
		ft_print_list(tmp);
	}
	ft_print_list(tmp);

		
}

int main(void)
{
	t_list *new_elem;
	t_list **ptr;

	ptr = &new_elem;
	new_elem = NULL;

	new_elem = ft_create_elem("cfdvwve@!#O$/1-;");
	ft_putstr()
	ft_list_push_back(ptr,"datathnigs");
	new_elem = ft_create_elem("this is sparta");
	ft_list_push_back(ptr,"datathings2");
	return (0);
}
