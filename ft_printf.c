/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:17:18 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/11/20 21:20:56 by ckrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

void	find_fspecifier(const char *format, va_list args, int i, int *count)
{
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == 'c')
			return (ft_putchar_fd(va_arg(args, int), 1, count));
		else if (format[i] == '%' && format[i + 1] == 's')
			return (ft_putstr_fd(va_arg(args, char *), 1, count));
		else if (format[i] == '%' && format[i + 1] == 'p')
			return (print_ptr(va_arg(args, void *), count));
		// else if (format[i] == '%' && (format[i + 1] == 'd' || format[i
		// 			+ 1] == 'i'))
		// 	return (ft_putnbr_fd(va_arg(args, int), 1, count));
		// else if (format[i] == '%' && format[i + 1] == 'u')
		// 	return (0);
		// else if (format[i] == '%' && format[i + 1] == 'x')
		// 	return (0);
		// else if (format[i] == '%' && format[i + 1] == 'X')
		// 	return (0);
		// else if (format[i] == '%' && format[i + 1] == '%')
		// 	return (ft_putchar_fd('%', 1, count));
		// else
		// 	return ;
		i++;
	}
}
/*

p for pointer
d for intiger
i for intiger
u for long int
x or hex
X for HEX
%% for %%*/

// format is the mandatory argument of printf
int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			find_fspecifier(format, args, i, &count);
			i++;
		}
		else
			ft_putchar_fd(format[i], 1, &count);
		i++;
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	char *c = "hello";
	int result = ft_printf("%p\n", c);
	int nr = printf("%p\n", c);
	printf("Nr.: %d\n", nr);
	printf("Returned: %d\n", result);
	return (0);
}