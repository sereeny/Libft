NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
CC = gcc
CLEAN = rm -Rf
SRC = ft_isalpha.c	ft_isdigit.c\
	ft_isalnum.c	ft_isascii.c\
	ft_isprint.c	ft_strlen.c\
	ft_memset.c		ft_bzero.c\
	ft_toupper.c	ft_tolower.c\
	ft_strchr.c		ft_strrchr.c\
	ft_strncmp.c	ft_memcpy.c\
	ft_strnstr.c

OBJS := $(SRC:.c=.o)

all: $(NAME)

$(NAME):%.o 
	@ar rcs $(NAME) $(OBJS)
%.o:
	@$(CC) $(CFLAGS) -c $(SRC)
clean:
	@$(CLEAN) ./*.o
fclean:
	@$(CLEAN) ./*.o
	@$(CLEAN) ./*.a
re: fclean all
.PHONY: all clean fclear re