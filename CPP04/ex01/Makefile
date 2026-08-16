NAME = Zoo
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror --std=c++98 -g
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

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
