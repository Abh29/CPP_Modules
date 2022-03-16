#first parts 
SRC := main.cpp Bureaucrat.cpp 

CC = c++

FLGS = -Wall -Werror -Wextra -std=c++98 -g

VALGFLGS = --vgdb=full \
		 --leak-check=full \
         --show-leak-kinds=all \
         --track-origins=yes \
         --verbose 
         #--log-file=valgrind-out.txt

HEADERs = Bureaucrat.hpp

OBJ := $(SRC:%.cpp=%.o)

NAME = bureaucrat

%.o : %.cpp
	@echo "compiling ..."
	$(CC) $(FLGS) -c $<

all :$(NAME)
	
$(NAME): $(OBJ)
	@echo "compiling ..."
	$(CC) $(FLGS) $(OBJ) -o $(NAME)


clean:
	@echo "cleaning all objects"
	@rm -rf *.o

fclean: clean
	@echo "cleaning every thing ..."
	@rm -f $(NAME)

re: fclean all

valgrind: $(NAME)
	@valgrind $(VALGFLGS) ./$(NAME) $(TARGS)

.PHONY: all clean fclean bonus so re test

#&.c : &.o libft.a 
