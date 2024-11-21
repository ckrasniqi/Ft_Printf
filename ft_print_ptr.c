/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:19:15 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/11/20 21:22:59 by ckrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	length_of_hex(unsigned long num, int *count)
{
	int	i;

	i = 0;
	while (num > 0)
	{
		num /= 16;
		i++;
	}
	return (i);
}

void	print_hex(unsigned long num, int *count)
{
	int		len;
	char	*hex_digits;
	char	*array_hex;
	int		temp;
	int		i;

	i = 0;
	len = length_of_hex(num, count);
	hex_digits = "0123456789abcdef";
	array_hex = ft_calloc(len + 1, sizeof(char));
	if (!array_hex)
	{
		*count *= -1;
		return ;
	}
	len--;
	while (num > 0)
	{
		temp = num % 16;
		num /= 16;
		array_hex[i--] = hex_digits[temp];
	}
	ft_putstr_fd(array_hex, 1, count);
	free(array_hex);
}

void	print_ptr(void *ptr, int *count)
{
	unsigned long num;

	ft_putstr_fd("0x", 1, count);
	num = (unsigned long)ptr;
	if (num == 0)
		ft_putstr_fd("0", 1, count);
	print_hex(num, count);
}