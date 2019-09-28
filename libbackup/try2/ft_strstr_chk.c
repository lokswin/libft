/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_chk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drafe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 17:13:30 by drafe             #+#    #+#             */
/*   Updated: 2019/05/21 15:46:15 by drafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	return (ft_strnstr(haystack, needle, ft_strlen(haystack)));
}

int		main(void)
{
	ft_putstr("F1:");
	ft_putstr(ft_strstr("1680689", "68"));
	ft_putstr("\nS1:");
	ft_putstr(strstr("1680689", "68"));
	ft_putstr("\nF2:");
    ft_putstr(ft_strstr("1680689", "689"));
    ft_putstr("\nS2:");
    ft_putstr(strstr("1680689", "689"));
	ft_putstr("\nF3:");
    ft_putstr(ft_strstr("1680689", "8"));
    ft_putstr("\nS3:");
    ft_putstr(strstr("1680689", "8"));
	ft_putstr("\nF4:");
    ft_putstr(ft_strstr("1680689", "9"));
    ft_putstr("\nS4:");
    ft_putstr(strstr("1680689", "9"));
	ft_putstr("\nF5:");
    ft_putstr(ft_strstr("1680689", "1"));
    ft_putstr("\nS5:");
    ft_putstr(strstr("1680689", "1"));
	ft_putstr("\nF6:");
    ft_putstr(ft_strstr("1680689", "7"));
    ft_putstr("\nS6:");
    ft_putstr(strstr("1680689", "7"));
	ft_putstr("\nF7:");
    ft_putstr(ft_strstr("abcdabcde", "abcde"));
	ft_putstr("\nS7:");
    ft_putstr(strstr("abcdabcde", "abcde"));
	ft_putstr("\nF8:");
    ft_putstr(ft_strstr("abcdabcde", ""));
    ft_putstr("\nS8:");
    ft_putstr(strstr("abcdabcde", ""));
}
