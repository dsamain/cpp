NAME = convert 
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

.cpp.o:
	$(CC) $(FLAGS) -c $(SRC)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -std=c++98 -o $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all
