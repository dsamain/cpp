NAME = zombie 
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++ 

all: $(NAME)

.cpp.o:
	$(CC) $(FLAGS) -c $(SRC)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all
