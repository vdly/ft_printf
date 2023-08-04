# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johii <johii@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 17:12:47 by johii             #+#    #+#              #
#    Updated: 2023/07/13 15:21:28 by johii            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
RM			= rm -rf
CFLAGS		= -Wall -Werror -Wextra
ARCHIVE		= ar -rc

CFILES		= ft_printf.c \
			  print_c.c \
			  print_s.c \
			  print_d.c \
			  print_p.c \
			  print_upperx.c \


COFILES		= $(CFILES:.c=.o)
OFILES		= $(COFILES)

all : $(NAME)

$(NAME): $(OFILES)
	make -C ./libft
	cp libft/libft.a ./
	$(ARCHIVE) $(NAME) $(COFILES)

clean :
	cd libft && make clean
	$(RM) $(OFILES)

fclean : clean
	cd libft && make fclean
	$(RM) libft.a
	$(RM) $(NAME)
	
re : fclean all

.PHONY : all clean fclean re
