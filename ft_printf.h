/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:43:21 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/11/22 14:35:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar_fd(char c, int fd, int *count);
void	ft_putstr_fd(char *s, int *count);
char	*ft_strdup(const char *s);
char	*ft_itoa(int n);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *c);
void	ft_print_ptr(void *ptr, int *count);
void	ft_print_nbr(int n, int *count);


#endif
