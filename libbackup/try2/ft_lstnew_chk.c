/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 20:57:52 by drafe             #+#    #+#             */
/*   Updated: 2019/05/31 21:15:07 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_print_list(t_list *list)
{
    while (list)
    {
        ft_putstr(list -> content);
        list = list -> next;
    }
}

int				main()
{
	t_list		*new_elem;
	t_list      *sec_elem;

	new_elem = NULL;
	sec_elem = NULL;
	new_elem = ft_lstnew("abc", 4);
	sec_elem = ft_lstnew("\nqzxy\n", 10);
	ft_print_list(new_elem);
	ft_print_list(sec_elem);
	
	return (0);
}
