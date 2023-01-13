NAME 		= 	zombie
SRCS		=	main.cpp randomChump.cpp Zombie.cpp newZombie.cpp
OBJS		=	$(SRCS:.cpp=.o)
CC 			=	c++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98

all:	 		$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
				@rm -f $(OBJS)

fclean: 		clean
				@rm -f $(NAME)

re: 			fclean all

.PHONY: 		all clean fclean re
