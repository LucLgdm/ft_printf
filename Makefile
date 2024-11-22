# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/13 12:55:34 by lde-merc          #+#    #+#              #
#    Updated: 2024/11/22 12:53:34 by lde-merc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OUT = libftprintf.a
CC = cc
AR = ar -rcs
CFLAGS = -Wall -Werror -Wextra
LIBFT = libft/libft.a
HEADER = ft_printf.h
FILES = ft_printf.c \
ft_hexaconvert.c \
ft_type.c \
printf_utils.c
SRC = $(FILES)
OBJ = $(FILES:.c=.o)

all: makelibft $(OUT)

$(OUT): $(OBJ)
		cp $(LIBFT) $(OUT)
		$(AR) $(OUT) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C libft clean
	
fclean: clean
	rm -f $(OUT)
	rm -f $(LIBFT)
	
re: fclean all

makelibft:
	make -C libft all

.PHONY: all clean fclean re makelibft
