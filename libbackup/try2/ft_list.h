/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 17:06:19 by drafe             #+#    #+#             */
/*   Updated: 2019/02/13 18:21:35 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef	struct				s_list
{
	struct s_list			*next;
	void					*data;
}							t_list;

t_list						*ft_create_elem(void *data);
void						ft_print_list(t_list *list);

#endif
