# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/11 16:55:26 by ael-moha          #+#    #+#              #
#    Updated: 2025/07/03 16:10:24 by ael-moha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME= spanner

CXX=c++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRCS= main.cpp MutantStack.cpp 
OBJS=$(SRCS:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all