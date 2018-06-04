NAME = 				libft.a
FILENAMES = 		ft_memset.c \
					ft_bzero.c \
					ft_memmove.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memccpy.c \
					ft_strlen.c \
					ft_strdup.c \
					ft_strcpy.c \
					ft_strncpy.c \
					ft_strcat.c \
					ft_strncat.c \
					ft_strlcat.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_strstr.c \
				   					ft_strcmp.c \
					ft_strncmp.c \
					ft_atoi.c \
					ft_isalpha.c \
					ft_isdigit.c \
					ft_isalnum.c \
					ft_isascii.c \
					ft_isprint.c \
					ft_toupper.c \
					ft_tolower.c \
					ft_memalloc.c \
					ft_memdel.c \
					ft_strnew.c \
					ft_strdel.c \
					ft_strclr.c \
					ft_striter.c \
					ft_striteri.c \
					ft_strmap.c \
					ft_strmapi.c \
					ft_strequ.c \
					ft_strnequ.c \
					ft_strsub.c \
					ft_strjoin.c \
					ft_strtrim.c \
					ft_strsplit.c \
					ft_itoa.c \
					ft_putchar.c \
					ft_putstr.c \
					ft_putendl.c \
					ft_putnbr.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c \
#DIRS
SDIR 	= src
HDIR	= includes
ODIR	= obj

#COMP
CMP		= gcc #llvm-gcc
AR		= ar rc

_OBJ	= $(FILENAMES:.c=.o)
OBJ		= $(patsubst %,$(ODIR)/%,$(_OBJ))
CFLAGS	= -Wall -Werror -Wextra 
HFLAGS	= -I$(HDIR)

#ODIR	= obj

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	ranlib $(NAME)
	@echo "\033[1;31;40m -------------- FINIIIII  GG. ---------------\033[0m"
$(ODIR)/%.o: $(SDIR)/%.c
	$(CMP) $(HFLAGS) -o $@ -c $? $(CFLAGS) 

.PHONY: clean fclean re

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
