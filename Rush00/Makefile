.PHONY: all clean fclean re

NAME = ft_retro

SRCS = main.cpp Asteroid.class.cpp Bullet.cpp EnemyShip.cpp \
SpaceShip.cpp Star.class.cpp World.class.cpp

OBJ = $(SRCS:.cpp=.o)

CFLAGS = -std=c++98 -Wall -Werror -Wextra

CC = clang++

all: $(NAME) $(OBJ)

$(NAME): $(OBJ) 
	$(CC) $(CFLAGS) -lncurses $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all