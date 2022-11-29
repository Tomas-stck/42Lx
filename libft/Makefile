NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = ft_strtrim.c ft_putchar_fd.c ft_strmapi.c ft_split.c ft_itoa.c ft_memmove.c ft_calloc.c ft_substr.c ft_isprint.c\
		ft_strchr.c ft_bzero.c ft_strlen.c ft_strrchr.c ft_memset.c ft_tolower.c ft_isdigit.c ft_strlcat.c ft_strjoin.c\
		ft_strlcpy.c ft_toupper.c ft_putstr_fd.c ft_strncmp.c ft_memcmp.c ft_putnbr_fd.c ft_memchr.c ft_striteri.c\
		ft_memcpy.c ft_isascii.c ft_strnstr.c ft_strdup.c ft_atoi.c ft_putendl_fd.c ft_isalpha.c ft_isalnum.c\
		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c #ft_lstiter.c ft_lstmap.c

# BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
# 		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# B_OBJ = $(BONUS_SRC:.c=.o)

all:	$(NAME)

# # rcs = replace (create library only if it doesn't exist), create, sort
# # ar = create modify or extract

# bonus:	$(B_OBJ)
# 			ar rcs $(NAME) $(B_OBJ)

OBJ = $(SRC:.c=.o)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ) $(B_OBJ)

fclean:	clean
			$(RM) $(NAME)

re:	fclean $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)
