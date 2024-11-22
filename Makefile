# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 16:59:12 by ckrasniq          #+#    #+#              #
#    Updated: 2024/11/22 14:29:38 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a

SRCS			=	ft_calloc.c \
					ft_itoa.c \
					ft_printf.c \
					ft_putchar_fd.c \
					ft_putnbr_fd.c \
					ft_putstr_fd.c \
					ft_strlen.c \
					ft_print_ptr.c \
					

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

bonus:			$(OBJECTS)
				ar rcs $(NAME) $(OBJECTS)

.PHONY:			all clean fclean re
