# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nranna <nranna@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/20 18:11:54 by nranna            #+#    #+#              #
#    Updated: 2025/04/20 12:52:24 by nranna           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# --- [VARIABLES] --- #

NAME = n_lib.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = src
OBJ_DIR = obj
SRC_FILES = n_atoi.c n_isalnum.c n_isascii.c\
n_isprint.c n_memset.c n_tolower.c\
n_bzero.c n_isalpha.c n_isdigit.c\
n_memcpy.c n_strlen.c n_toupper.c\
n_memmove.c n_strncmp.c n_putstr_fd.c\
n_putchar_fd.c n_putendl_fd.c n_putnbr_fd.c\
n_memchr.c n_strlcat.c n_memcmp.c\
n_strchr.c n_strrchr.c n_striteri.c\
n_strlcpy.c n_strnstr.c n_calloc.c\
n_strdup.c n_strmapi.c n_substr.c\
n_strjoin.c n_strtrim.c n_itoa.c\
n_split.c
SRC = $(patsubst %, $(SRC_DIR)/%, $(SRC_FILES)) 
OBJ = $(patsubst %.c, $(OBJ_DIR)/%.o, $(SRC_FILES))

EYE = "\n ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠛⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠿⠿⠿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠉⠙⣿⣿⣿⣿⣿⣿⣿⣿⠟⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠙⠻⣿⣿⣿⣿⣿⠋⠉⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠋⠀⠀⠀⣠⣾⣿⣿⣿⣿⡿⠋⠀⠀⠀⠀⠀⣀⣀⣤⣤⣤⣄⣀⠀⠀⠀⠀⠀⠙⢿⣿⣿⣿⣄⠀⠀⠀⠉⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⢀⣰⣶⣿⣿⣿⣿⣿⡿⠋⠀⠀⠀⣀⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠙⣿⣿⣿⣿⣷⣤⡀⠀⠈⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⣰⣾⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⠀⢀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⡀⠀⠀⠘⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⠙⢿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⠟⠁⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⢠⣾⣿⣿⣿⣿⣿⡿⠿⠛⠛⠋⠛⣿⣿⣿⣿⣿⣿⣷⡀⠀⠀⠸⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⠹⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⠋⠀⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⣼⣿⣿⣿⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠛⣿⣿⣿⣿⣿⣿⣇⠀⠀⠀⣻⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀ ⢹⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⢠⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀ ⠀⢸⣿⣿⣿\n\
       ⣿⣿⣿⣿⣄⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠈⣿⣿⣿⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀ ⠀⣼⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣄⠀⠀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⠀⠀⢻⣿⣿⣿⣿⣿⣧⡀⠀⠀⠀⠀⠀⢀⣴⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⣾⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⠀⣼⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣷⣆⠀⠀⠈⠻⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠈⢿⣿⣿⣿⣿⣿⣿⣶⣤⣤⣤⣴⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⠟⠉⠀⠀⢀⣾⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣄⡀⠀⠀⠙⠻⣿⣿⣿⣿⣿⡄⠀⠀⠀⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠏⠀⠀⠀⢰⣿⣿⣿⣿⠟⠋⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣄⠀⠀⠀⠙⣿⣿⣿⣿⣆⡀⠀⠀⠈⠙⠿⢿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠋⠀⠀⠀⢀⣴⣿⣿⣿⠏⠁⠀⠀⢀⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣦⣀⣼⣿⣿⣿⣿⣿⣷⣤⡀⠀⠀⠀⠀⠈⢽⣿⣿⣿⠉⠀⠀⠀⠀⠀⢀⣴⣾⣿⣿⣿⣿⣧⣀⣤⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⠁ ⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣤⡄⠀⠀⠀⣿⣿⣿⠀⠀⠀⢠⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣦⣤⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⣿⣿⣿⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣤⣴⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⣿⣿⣿⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⣿⣿⣿⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⠈⢿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⣿⣿⣿⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⡟⠁⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣄⠀⠀⠀⠉⠻⠿⠿⠿⠿⠟⠀⠀⠀⣸⣿⣿⣿⡄⠀⠀⠈⠻⠿⠿⠿⠿⠟⠉⠀⠀⠀⣠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⣿⣿⣿⣿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
       ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"\

# --- [RULES] --- #

all: $(NAME)

$(NAME): $(OBJ)
	@echo $(EYE)
	@$(MAKE) --no-print-directory _progress
	@ar -rcs $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)
	@echo "\033[0;32m[objects deleted!]\033[0m"

fclean: clean
	@rm $(NAME)
	@echo "\033[0;32m[$(NAME) deleted!]\033[0m"

re: fclean all

# --- [SCRIPTS] --- #

_progress:
	@tput civis
	@width=50; \
	progress=0; \
	while [ $$progress -le $$width ]; do \
		printf "\r\033[0;32m Progress: ["; \
		for i in $$(seq 1 $$progress); do printf "#"; done; \
		for i in $$(seq $$((progress + 1)) $$width); do printf "-"; done; \
		printf "]%d%%\033[0m" $$((progress * 2)); \
		progress=$$((progress + 5)); \
		sleep 0.05; \
	done; \
	printf "\n\033[0;32m \t\t\t[$(NAME) was created!]\033[0m\n\n"; \
	tput cnorm

.PHONY: clean fclean all re
