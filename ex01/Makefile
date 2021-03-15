SRC = 		./srcs/main.cpp

OBJ = 		${SRC:.c=.o}
CC = 		clang++
CFLAGS = 	-Wall -Wextra -Werror
RM = 		rm -rf
NAME = phonebook


all:      ${NAME}

$(NAME) :	$(OBJ)
				$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 

%.o: %.c
		@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
		@echo "\033[93m."

clean:
		@${RM} -f phonebook
		@echo "\033[91mDeleting object files...\033[37m"

fclean:     clean
	        @rm -f ${NAME}
			@echo "\033[91mDeleting CPP_MODULE...\033[37m"

re : fclean all

.PHONY : all clean fclean re