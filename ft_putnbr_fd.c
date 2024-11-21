/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:57:41 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/11/20 19:49:18 by ckrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd, int *count)
{
	char	*str;
	int		i;
	int		len;

	str = ft_itoa(n);
	if (!str)
	{
		*count = -1;
		return (NULL);
	}
	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		ft_putchar_fd(str[i], fd, count);
		i++;
	}
	free(str);
}
