NAME = poly 
SRC = main.cpp poly.cpp
OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++ 

.cpp.o:
	$(CC) $(FLAGS) -c $(SRC)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all
