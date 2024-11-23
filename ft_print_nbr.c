/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:57:41 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/11/23 18:47:05 by ckrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nbr(int n, int *count)
{
	char	*str;

	if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", count);
		return ;
	}
	else if (n == INT_MAX)
	{
		ft_putstr_fd("2147483647", count);
		return ;
	}
	str = ft_itoa(n);
	if (!str)
	{
		*count = -1;
		return ;
	}
	else
	{
		ft_putstr_fd(str, count);
		free(str);
	}
	return ;
}
