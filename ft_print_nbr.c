/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:57:41 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/11/22 14:49:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nbr(int n, int *count)
{
	char *str;

	str = ft_itoa(n);
	if (!str)
	{
		*count = -1;
		return ;
	}
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", count);
	else
	{
		ft_putstr_fd(str, count);
		free(str);
	}
}
