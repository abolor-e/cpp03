NAME		= open

CC			= c++

CFLAGS		= -Wall -Werror -Wextra -std=c++98

SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS		= $(SRCS:.cpp=.o)

all:		$(NAME)

%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $^ -o $(NAME)

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re:			fclean all

PHONY:		clean fclean all re