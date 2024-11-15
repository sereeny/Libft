NAME			= libft.a

INC				= inc/
SRC_DIR			= src/
OBJ_DIR			= obj/

CC				= gcc
CFLAGS			= -Wall -Wextra -Werror -I $(INC)
RM				= rm -f
AR				= ar rcs

SRC = $(SRC_DIR)ft_is/ft_isalnum.c		$(SRC_DIR)ft_is/ft_isalpha.c\
	$(SRC_DIR)ft_is/ft_isascii.c		$(SRC_DIR)ft_is/ft_isdigit.c\
	$(SRC_DIR)ft_is/ft_isprint.c		$(SRC_DIR)ft_mem/ft_bzero.c\
	$(SRC_DIR)ft_mem/ft_calloc.c		$(SRC_DIR)ft_mem/ft_memchr.c\
	$(SRC_DIR)ft_mem/ft_memcmp.c		$(SRC_DIR)ft_mem/ft_memcpy.c\
	$(SRC_DIR)ft_mem/ft_memmove.c		$(SRC_DIR)ft_mem/ft_memset.c\
	$(SRC_DIR)ft_put/ft_putchar_fd.c	$(SRC_DIR)ft_put/ft_putstr_fd.c\
	$(SRC_DIR)ft_put/ft_putendl_fd.c	$(SRC_DIR)ft_put/ft_putnbr_fd.c\
	$(SRC_DIR)ft_str/ft_split.c			$(SRC_DIR)ft_str/ft_strchr.c\
	$(SRC_DIR)ft_str/ft_strdup.c		$(SRC_DIR)ft_str/ft_striteri.c\
	$(SRC_DIR)ft_str/ft_strjoin.c		$(SRC_DIR)ft_str/ft_strlcat.c\
	$(SRC_DIR)ft_str/ft_strlcpy.c		$(SRC_DIR)ft_str/ft_strlen.c\
	$(SRC_DIR)ft_str/ft_strmapi.c		$(SRC_DIR)ft_str/ft_strncmp.c\
	$(SRC_DIR)ft_str/ft_strnstr.c		$(SRC_DIR)ft_str/ft_strrchr.c\
	$(SRC_DIR)ft_str/ft_strtrim.c		$(SRC_DIR)ft_str/ft_substr.c\
	$(SRC_DIR)ft_to/ft_atoi.c			$(SRC_DIR)ft_to/ft_itoa.c\
	$(SRC_DIR)ft_to/ft_toupper.c		$(SRC_DIR)ft_to/ft_tolower.c

SRCBONUS =	$(SRC_DIR)ft_lst/ft_lstnew_bonus.c		$(SRC_DIR)ft_lst/ft_lstadd_front_bonus.c\
			$(SRC_DIR)ft_lst/ft_lstsize_bonus.c		$(SRC_DIR)ft_lst/ft_lstlast_bonus.c\
			$(SRC_DIR)ft_lst/ft_lstadd_back_bonus.c	$(SRC_DIR)ft_lst/ft_lstdelone_bonus.c\
			$(SRC_DIR)ft_lst/ft_lstclear_bonus.c	$(SRC_DIR)ft_lst/ft_lstiter_bonus.c\
			$(SRC_DIR)ft_lst/ft_lstmap_bonus.c

OBJS		= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRC))
OBJSBONUS	= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCBONUS))

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "\033[1;34m[INFO]\033[0m Compiled $< to $@"

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "\033[1;32m[OK]\033[0m Built library: $(NAME)"

bonus: $(OBJSBONUS)
	@$(AR) $(NAME) $(OBJSBONUS)
	@echo "\033[1;32m[OK]\033[0m Built bonus library: $(NAME)"

clean:
	@$(RM) -r $(OBJ_DIR)
	@echo "\033[1;33m[CLEAN]\033[0m Removed object files"

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[1;33m[CLEAN]\033[0m Removed library $(NAME)"

re: fclean all

.PHONY: all clean fclean re bonus
