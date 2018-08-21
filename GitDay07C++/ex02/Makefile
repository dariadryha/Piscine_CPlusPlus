NAME = array
CC = clang++
CFLAGS = -Wall -Wextra -Werror
SRCS = main.cpp
OBJ = $(SRCS:.cpp=.o)
HEADER = Array.hpp

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(CFLAGS) $^ -o $@

%.o:%.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
