NAME =	mylibrary.a

CC =	cc

CFLAGS =	-Wall -Wextra -Werror

AR =	ar

ARFLAGS =	rcs

SRC = src/bc_strchr_fo_rv.c src/bc_strchr_fo.c src/bc_strcmp.c src/bc_strdup.c src/bc_strlen.c src/bc_strncmp.c src/bc_replace_string.c \
src/bc_strncpy.c src/bc_split.c

SRCS = $(SRC)

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SECONDARY: $(OBJ)
