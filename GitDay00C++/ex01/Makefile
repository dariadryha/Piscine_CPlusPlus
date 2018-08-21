# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddryha <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/18 14:12:58 by ddryha            #+#    #+#              #
#    Updated: 2018/06/18 14:13:01 by ddryha           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = clang++
HEADER = Contact.class.hpp
CCFLAGS = -Wall -Wextra -Werror
SRCS = phonebook.cpp search_contact.cpp Contact.class.cpp
OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $^ -o $@

%.o:%.cpp $(HEADER)
	$(CC) $(CCFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
