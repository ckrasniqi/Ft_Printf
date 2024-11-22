/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:51:29 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/11/22 14:24:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int *count)
{
	int	i;
	int	len;

	if (!s)
		ft_putstr_fd("(null)", count);
	else
	{
		i = 0;
		len = ft_strlen(s);
		while (i < len)
		{
			ft_putchar_fd(s[i], 1, count);
			i++;
		}
	}
}
