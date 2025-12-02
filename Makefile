# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ingrid <ingrid@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/21 13:36:34 by ingrid            #+#    #+#              #
#    Updated: 2025/12/02 13:56:14 by ingrid           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC_DIR = src
INC_DIR = inc
OBJ_DIR = obj

LIBFT_DIR = lib/libft
LIBFT = $(LIBFT_DIR)/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I$(INC_DIR) -I$(LIBFT_DIR)/inc
LIBS = -L$(LIBFT_DIR) -lft

SRCS = $(SRC_DIR)/push_swap.c $(SRC_DIR)/utils.c $(SRC_DIR)/stack.c \
		$(SRC_DIR)/parsing_args.c $(SRC_DIR)/parsing.c \
		$(SRC_DIR)/operations_swap_push.c $(SRC_DIR)/operations_rotate.c $(SRC_DIR)/operations_reverse_rotate.c \
		$(SRC_DIR)/sort_small.c $(SRC_DIR)/sort_radix.c

OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo "📁 Created obj directory"

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/push_swap.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	@echo "Compiled $< → $@"

$(NAME): $(OBJ_DIR) $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $@
	@echo "✅ Created $(NAME)"

clean:
	@rm -rf $(OBJ_DIR)
	@$(MAKE) -C $(LIBFT_DIR) clean
	@echo "🧹 Removed object files and obj directory"

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@echo "🗑️ Removed executables and libft"

re: fclean all

.PHONY: all clean fclean re
