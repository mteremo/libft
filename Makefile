NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

MY_SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
		 ft_isprint.c ft_memchr.c ft_memcmp.c ft_striteri.c\
		 ft_memcpy.c ft_memmove.c ft_memset.c ft_putendl_fd.c\
		 ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c\
		 ft_strchr.c ft_strlcpy.c ft_strmapi.c\
		 ft_strdup.c ft_split.c ft_calloc.c ft_itoa.c\
		 ft_strlen.c ft_strncmp.c ft_substr.c ft_strtrim.c\
		 ft_strnstr.c ft_strrchr.c ft_strjoin.c\
		 ft_tolower.c ft_toupper.c ft_strlcat.c

MY_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

MY_OBJ =$(MY_SRC:.c=.o)

MY_B_OBJ = $(MY_BONUS:.c=.o)

LIB = libft.h

LIBC = ar rcs

all : $(NAME)

$(NAME) : $(MY_OBJ)
		$(CC) $(CFLAGS) -c $(MY_SRC)
		$(LIBC) $(NAME) $(MY_OBJ)

bonus : $(NAME)
		$(CC) $(CFLAGS) -c $(MY_BONUS)
		$(LIBC) $(NAME) $(MY_B_OBJ)

clean :
		$(RM) $(MY_OBJ) $(MY_B_OBJ)

fclean : clean
		$(RM) $(NAME)

re :fclean all

.PHONY : all, bonus, clean, fclean, re