# ================== CONFIG ================== #
NAME     := PhoneBook
CC       := c++
CFLAGS   := -Wall -Wextra -Werror -std=c++98
OPTIONS  := -I includes

SRC_DIR  := src
OBJ_DIR  := obj

SRC_FILES := main.cpp Contact.cpp PhoneBook.cpp
SRC  := $(addprefix $(SRC_DIR)/,$(SRC_FILES))
OBJS := $(addprefix $(OBJ_DIR)/,$(SRC_FILES:.cpp=.o))

# ================== RÈGLES ================== #
all: $(NAME)

$(NAME): $(OBJS)
	@echo "Linking objects..."
	@$(CC) $(CFLAGS) $(OPTIONS) $(OBJS) -o $(NAME)
	@echo "✓ Compilation réussie, Ma reine !"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(OPTIONS) -c $< -o $@

clean:
	@rm -rf $(OBJS)
	@echo "Objets supprimés."

fclean: clean
	@rm -rf $(NAME)
	@echo "Exécutable supprimé."
	@echo "✓ Ils ont bien été annihilés, vous dominerez le monde, Ma reine."

re: fclean all
.PHONY: all clean fclean re
