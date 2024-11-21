/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:51:29 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/11/20 20:54:59 by ckrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd, int *count)
{
	int	i;
	int	len;

	if (!s)
		ft_putstr_fd("(null)", fd, count);
	else
	{
		i = 0;
		len = ft_strlen(s);
		while (i < len)
		{
			ft_putchar_fd(s[i], fd, count);
			i++;
		}
	}
}
