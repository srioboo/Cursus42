NAME=libft.a
CC=cc
CFLAGS=-Wall -Werror -Wextra -lbsd
CFILES= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c \
		ft_strchr.c ft_strlcat.c ft_atoi.c ft_memchr.c \
		ft_memcpy.c ft_memset.c ft_strlcpy.c ft_strnstr.c \
		ft_bzero.c ft_memcmp.c ft_memmove.c ft_strlcat.c \
		ft_strncmp.c ft_strrchr.c
OFILES=$(CFILES:.c=.o)

all: $(NAME) clean

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean 
	rm -f ${NAME}

re: fclean $(NAME)


