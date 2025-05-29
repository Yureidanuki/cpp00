NAME      = megaphone
CXX       = c++
CXXFLAGS  = -Wall -Wextra -Werror -std=c++98

SRC_DIR   = .
OBJ_DIR   = obj
SRC_FILES = megaphone.cpp

SRC  = $(addprefix $(SRC_DIR)/,$(SRC_FILES))
OBJS = $(addprefix $(OBJ_DIR)/,$(SRC_FILES:%.cpp=%.o))

GREEN  = \033[32m
BLUE   = \033[34m
RESET  = \033[0m
RED    = \033[31m

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(BLUE)Linking objects...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)✓ Compilation réussie, Ma princesse !$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(RED)✓ objets supprimé !$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)✓ Exécutable supprimé !$(RESET)"

re: fclean all

.PHONY: all clean fclean re
