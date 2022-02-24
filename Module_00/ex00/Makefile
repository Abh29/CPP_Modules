#first parts 
SRC :=	megaphone.cpp Megaphone.cpp

#bonnus 
BSRC :=	$(SRC)

CC = c++

FLGS = -Wall -Werror -Wextra -std=c++98

VALGFLGS = --vgdb=full \
		 --leak-check=full \
         --show-leak-kinds=all \
         --track-origins=yes \
         --verbose \
         --log-file=valgrind-out.txt


HEADERs = megaphone.hpp


NAME = megaphone


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


debug: $(SRC) $(HEADER)
	@make debug -C libft/
	@echo "compiling with -g ..."
	@$(CC) -g $(FBSIZE) $(SRC) -o $(NAME)

valgrind: $(NAME)
	@valgrind $(VALGFLGS) ./$(NAME) $(TARGS)


.PHONY: all clean fclean bonus so re test

#&.c : &.o libft.a 
