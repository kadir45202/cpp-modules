CC = c++
NAME = humans
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

all: $(NAME)

$(NAME): *.cpp
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

dev: *.cpp
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)