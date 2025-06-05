# ================== CONFIG ================== #
NAME     := PhoneBook
CC       := c++
CFLAGS   := -Wall -Wextra -Werror -std=c++98
OPTIONS  := -I includes

SRC_DIR  := src
OBJ_DIR  := obj

SRC_FILES := main.cpp Contact.cpp PhoneBook.cpp add.cpp search.cpp
SRC  := $(addprefix $(SRC_DIR)/,$(SRC_FILES))
OBJS := $(addprefix $(OBJ_DIR)/,$(SRC_FILES:.cpp=.o))

GREEN  = \033[32m
BLUE   = \033[34m
RESET  = \033[0m
RED    = \033[31m

# ================== RÈGLES ================== #
all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(BLUE)Linking objects...$(RESET)"
	@$(CC) $(CFLAGS) $(OPTIONS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)✓ Compilation réussie, Ma princesse !$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(OPTIONS) -c $< -o $@

clean:
	@rm -rf $(OBJS)
	@echo "$(RED)✓ objets supprimé !$(RESET)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)✓ Exécutable supprimé !$(RESET)"

re: fclean all
.PHONY: all clean fclean re
