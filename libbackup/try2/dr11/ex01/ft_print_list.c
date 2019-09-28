
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:05:05 by drafe             #+#    #+#             */
/*   Updated: 2019/02/13 18:48:02 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_list.h"

void	ft_putstr(char *str);

void	ft_print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list -> data);
		list = list -> next;
	}
}
