# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/20 15:13:12 by lbolea            #+#    #+#              #
#    Updated: 2025/12/10 15:49:34 by lbolea           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
AR = ar
CFLAGS = -Wall -Wextra -Werror
FILES.H = libft.h
SRCS = 	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c
OBJS = $(SRCS:.c=.o)

## COLORS
DEF		= \033[0m
GREEN 	= \033[0;32m

##COMMANDES

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) rcs $(NAME) $(OBJS)
	@echo "$(GREEN)[OK]$(DEF) CREATED libft"

%.o: %.c $(FILES.H)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "$(GREEN)[OK]$(DEF) CLEANED libft objs"

fclean: clean
	@rm -f $(NAME)
	@echo "$(GREEN)[OK]$(DEF) CLEANED libft library"

re: 
	@make fclean
	@make all
	@echo "$(GREEN)[OK]$(DEF) RECOMPILED libft"

.PHONY: all clean fclean re
