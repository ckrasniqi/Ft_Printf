/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:56:46 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/11/22 19:04:41 by ckrasniq         ###   ########.fr       */
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
