/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:57:23 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/11/22 18:57:30 by ckrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd, int *count)
{
	int	check_write;

	if (*count == -1)
		return ;
	check_write = write(fd, &c, 1);
	if (check_write == -1)
	{
		*count = -1;
		return ;
	}
	else
		*count += check_write;
}
