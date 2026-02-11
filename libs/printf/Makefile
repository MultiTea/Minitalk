# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/20 15:13:12 by lbolea            #+#    #+#              #
#    Updated: 2026/01/17 18:52:26 by lbolea           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libftprintf.a

#SOURCES
SRC_DIR		:= src
SRCS		:= ft_printf.c
SRCS 		:= $(SRCS:%=$(SRC_DIR)/%)

#UTILS
UTILS_DIR		:= utils
UTILS 		:= \
		parse.c \
		ft_print_char.c \
		ft_print_hex.c \
		ft_print_num.c \
		ft_print_ptr.c \
		ft_print_str.c \
		ft_print_unint.c
UTILS 		:= $(UTILS:%=$(UTILS_DIR)/%)

#INCLUDES
INC_DIR		:= include/

#LIBFT
LIBFT 		:= libft

#BUILD
BUILD_DIR 	:= .build
OBJS 		:= $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
OBJS 		+= $(UTILS:$(UTILS_DIR)/%.c=$(BUILD_DIR)/$(UTILS_DIR)/%.o)
DEPS		:= $(OBJS:.o=.d)

#FLAGS
CC 			:= cc
CCFLAGS 	:= -Wall -Wextra -Werror
AR 			:= ar
ARFLAGS		:= rcs

#TOOLS
RM 			:= rm -f
DIR_DUP		= mkdir -p $(@D)
MAX_J 		:= 8

## COLORS
DEF		= \033[0m
GREEN 	= \033[0;32m

##COMMANDES

all: $(NAME)

$(NAME): $(OBJS)
	@+make --no-print-directory -j$(MAX_J) -C $(LIBFT)
	@mv $(LIBFT)/libft.a $(NAME)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "$(GREEN)[OK]$(DEF) CREATED $@"

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@$(DIR_DUP)
	@$(CC) $(CCFLAGS) -I $(INC_DIR) -c $< -o $@

$(BUILD_DIR)/utils/%.o: $(UTILS_DIR)/%.c
	@$(DIR_DUP)
	@$(CC) $(CCFLAGS) -I $(INC_DIR) -c $< -o $@

-include $(DEPS)

clean:
	@$(RM) $(OBJS) $(DEPS)
	@+make --no-print-directory clean -C $(LIBFT)
	@echo "$(GREEN)[OK]$(DEF) CLEANED $@ objs & deps"

fclean: clean
	@$(RM) $(NAME)
	@rm -rf $(LIBFT)/libft.a
	@rm -rf $(BUILD_DIR)
	@echo "$(GREEN)[OK]$(DEF) CLEANED $(NAME)"

re: 
	@+make --no-print-directory -j$(MAX_J) fclean
	@+make --no-print-directory all
	@echo "$(GREEN)[OK]$(DEF) RECOMPILED $(NAME)"

.PHONY: all clean fclean re