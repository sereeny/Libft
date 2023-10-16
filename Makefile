NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
CC = gcc -c
CLEAN = rm -Rf
SRC = ft_isalpha.c		ft_isdigit.c\
	ft_isalnum.c		ft_isascii.c\
	ft_isprint.c		ft_strlen.c\
	ft_memset.c			ft_bzero.c\
	ft_toupper.c		ft_tolower.c\
	ft_strchr.c			ft_strrchr.c\
	ft_strncmp.c		ft_memcpy.c\
	ft_strnstr.c		ft_memmove.c\
	ft_memchr.c			ft_memcmp.c\
	ft_strlcpy.c		ft_strlcat.c\
	ft_atoi.c			ft_calloc.c\
	ft_strdup.c 		ft_substr.c\
	ft_strjoin.c		ft_strtrim.c\
	ft_strmapi.c		ft_striteri.c\
	ft_putchar_fd.c 	ft_putstr_fd.c\
	ft_putendl_fd.c		ft_putnbr_fd.c\
	ft_itoa.c			ft_split.c\

SRCBONUS = 	ft_lstnew_bonus.c	ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c	ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c

OBJSBONUS := $(SRCBONUS:.c=.o)

OBJS := $(SRC:.c=.o)

all: 		$(NAME)

$(NAME):
		@$(CC) $(CFLAGS) $(SRC)
		@ar rcs $(NAME) $(OBJS)

bonus:
		@$(CC) $(CFLAGS) $(SRCBONUS)
		@ar rcs $(NAME) $(OBJSBONUS)

clean:
	@$(CLEAN) ./*.o
fclean: clean
	@$(CLEAN) ./*.a
re: fclean all
.PHONY: all clean fclear re bonus