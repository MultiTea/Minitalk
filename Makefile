# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/20 15:13:12 by lbolea            #+#    #+#              #
#    Updated: 2026/02/12 09:29:12 by lbolea           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLIENT		:= client
SERVER		:= server

#SOURCES
SRC_DIR		:= src
SRCS		:= server.c \
	client.c
SRCS 		:= $(SRCS:%=$(SRC_DIR)/%)

#INCLUDES
INCS		:= 	include \
	libs/Libft/ \
	libs/printf/include/

#LIBS
LIBS	:= ft ftprintf
LIBS_TARGET :=	\
	libs/Libft/libft.a \
	libs/printf/libftprintf.a

#BUILD
BUILD_DIR 	:= .build
OBJS 		:= $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS		:= $(OBJS:.o=.d)

#FLAGS
CC 			:= cc
CCFLAGS 	:= -Wall -Wextra -Werror -D _DEFAULT_SOURCE
AR 			:= ar
ARFLAGS		:= rcs
LDFLAGS     := $(addprefix -L,$(dir $(LIBS_TARGET)))
LDLIBS      := $(addprefix -l,$(LIBS))

#TOOLS
RM 			:= rm -f
DIR_DUP		= mkdir -p $(@D)
MAX_J 		:= 8

## COLORS
DEF		= \033[0m
GREEN 	= \033[0;32m

##COMMANDES

all: $(CLIENT) $(SERVER)

$(CLIENT) $(SERVER): $(BUILD_DIR)/$(CLIENT).o $(BUILD_DIR)/$(SERVER).o $(LIBS_TARGET)
	@$(CC) $(CCFLAGS) $(LDFLAGS) $(BUILD_DIR)/$(CLIENT).o $(LDLIBS) -o $(CLIENT)
	@$(CC) $(CCFLAGS) $(LDFLAGS) $(BUILD_DIR)/$(SERVER).o $(LDLIBS) -o $(SERVER)
	@echo "$(GREEN)[OK]$(DEF) CREATED $(CLIENT) & $(SERVER)"

$(LIBS_TARGET):
	@$(MAKE) --no-print-directory -C $(@D)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@$(DIR_DUP)
	@$(CC) $(CCFLAGS) -c $< -o $@
	@echo "$(GREEN)[OK]$(DEF) CREATED $@"

-include $(DEPS)

clean:
	@for f in $(dir $(LIBS_TARGET)); do $(MAKE) --no-print-directory -C $$f clean; done
	@$(RM) $(OBJS) $(DEPS)
	@echo "$(GREEN)[OK]$(DEF) CLEANED $(CLIENT) & $(SERVER) objs & deps"

fclean: clean
	@for f in $(dir $(LIBS_TARGET)); do $(MAKE) --no-print-directory -C $$f fclean; done
	@$(RM) $(CLIENT)
	@$(RM) $(SERVER)
	@rm -rf $(BUILD_DIR)
	@echo "$(GREEN)[OK]$(DEF) CLEANED $(CLIENT) & $(SERVER)"

re:
	@+make --no-print-directory -j$(MAX_J) fclean --no-print-directory
	@+make --no-print-directory all
	@echo "$(GREEN)[OK]$(DEF) RECOMPILED $(CLIENT) & $(SERVER)"

#debug: fclean
#	@$(MAKE) --no-print-directory $(OBJS) $(LIBS_TARGET) CCFLAGS="$(CCFLAGS) -g"
#	@$(CC) $(CCFLAGS) -g $(LDFLAGS) $(OBJS) $(LDLIBS) -o debug
#	@echo "$(GREEN)[OK]$(DEF) CREATED debug program"

.PHONY: all clean fclean re