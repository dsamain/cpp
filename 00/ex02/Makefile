NAME = test 
SRC = tests.cpp Account.cpp

.cpp.o:
	$(CC) $(FLAGS) -c $(SRC)

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++ $(FLAGS)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all
