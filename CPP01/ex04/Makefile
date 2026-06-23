# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pedro </var/spool/mail/pedro>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/18 11:49:08 by pedro             #+#    #+#              #
#    Updated: 2026/06/18 11:49:27 by pedro            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sedIsForLosers

CPP = clang++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

e: all clean

.PHONY: all clean e fclean re
