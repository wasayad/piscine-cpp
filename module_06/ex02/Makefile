SRC =    main.cpp


HEADERS = 
NAME = identify
CC = clang++
OBJ = ${SRC:.cpp=.o}
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

$(NAME) :	$(OBJ)
				$(CC) $(CPPFLAGS) -o $@ $(OBJ)

all :		${NAME}

%.o: %.cpp	$(HEADERS)
			@$(CC) $(CPPFLAGS) -o $@ -c $<    

clean :		
		rm -f $(OBJ)

fclean :	clean
				rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re