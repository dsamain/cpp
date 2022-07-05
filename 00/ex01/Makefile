NAME = phoneBook 
SRC = src/PhoneBook.cpp src/Contact.cpp src/main.cpp
OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++ $(FLAGS)

.cpp.o:
	$(CC) $(FLAGS) -c  $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all
