#first parts 
SRC :=	Account.cpp tests.cpp 

#bonnus 
BSRC :=	$(SRC)

CC = c++

FLGS = -Wall -Werror -Wextra -std=c++98 -g

VALGFLGS = --vgdb=full \
		 --leak-check=full \
         --show-leak-kinds=all \
         --track-origins=yes \
         --verbose 
         #--log-file=valgrind-out.txt


HEADERs = Account.hpp


NAME = account


all :$(NAME)
	
$(NAME): $(SRC) $(HEADER)
	@echo "compiling ..."
	@$(CC) $(FLGS)  $(FBSIZE) $(SRC) -o $(NAME)


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
