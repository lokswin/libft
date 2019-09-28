/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 20:51:52 by drafe             #+#    #+#             */
/*   Updated: 2019/05/31 21:11:23 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;
	

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp ->content = (void*)content;
		tmp ->content_size = content_size;
		tmp ->next = NULL;
	}
	else
		return(0);

	return (tmp);
}
