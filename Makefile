# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 16:59:12 by ckrasniq          #+#    #+#              #
#    Updated: 2024/11/23 18:58:11 by ckrasniq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a

SRCS			=	ft_calloc.c \
					ft_itoa_long.c \
					ft_itoa.c \
					ft_print_hex_l.c \
					ft_print_hex_u.c \
					ft_print_long.c \
					ft_print_nbr.c \
					ft_print_ptr.c \
					ft_printf.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_strlen.c \


OBJECTS			= $(SRCS:.c=.o)

COMPILING		= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

all:			$(NAME)

$(NAME):		$(OBJECTS)
				ar rcs $(NAME) $(OBJECTS)

clean:
				$(RM) $(OBJECTS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

# bonus:			$(OBJECTS)
# 				ar rcs $(NAME) $(OBJECTS)

.PHONY:			all clean fclean re
