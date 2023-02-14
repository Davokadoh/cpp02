# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jleroux <jleroux@student.42lausanne.ch>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 15:29:36 by jleroux           #+#    #+#              #
#    Updated: 2023/02/14 15:06:19 by jleroux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	a.out

SRC_DIR		=	src
SRCS		=	$(SRC_DIR)/main.cpp \
				$(SRC_DIR)/Fixed.cpp \

INCS		=	inc

CXX			=	g++-12#c++
CXXFLAGS	=	-std=c++98
CPPFLAGS	=	-Wall -Wextra -Werror -pedantic \
				$(addprefix -I,$(INCS)) -MMD -MP \

RM			=	rm -rf

BUILD_DIR	=	bin
OBJS		=	$(SRCS:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)
DEPS        =	$(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(BUILD_DIR):
	@mkdir -p $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<

-include $(DEPS)

clean:
	$(RM) $(BUILD_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

run: all
	clear
	./$(NAME)

leaks: re
	clear
	leaks -atExit -- ./$(NAME)

.PHONY: all clean fclean re run leaks
