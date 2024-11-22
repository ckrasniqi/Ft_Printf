/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_long.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:52:42 by marvin            #+#    #+#             */
/*   Updated: 2024/11/22 14:52:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void	ft_print_long(unsigned int n, int *count)
{
	
	char *str;

	str = ft_itoa_long(n);
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
}
