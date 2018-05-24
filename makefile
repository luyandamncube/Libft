###################################################################### 
#								     #	
#       ██╗     ███████╗███╗   ███╗ ██████╗ ███╗   ██╗	     #
#  	    ██║     ██╔════╝████╗ ████║██╔═══██╗████╗  ██║	     #
#  	    ██║     █████╗  ██╔████╔██║██║   ██║██╔██╗ ██║	     #
#       ██║     ██╔══╝  ██║╚██╔╝██║██║   ██║██║╚██╗██║	     #
#  	    ███████╗███████╗██║ ╚═╝ ██║╚██████╔╝██║ ╚████║	     #
#  	    ╚══════╝╚══════╝╚═╝     ╚═╝ ╚═════╝ ╚═╝  ╚═══╝	     #
#				MAKEFILE			     #
#	CREATED BY:	lmncube					     #
#	https://github.com/lmncube				     #
#								     #
###################################################################### 

#############################  MACROS  ###############################
#								     #
#	patsubst is a pattern matcher, where % is the wildcard	     #
#	$(patsubst pattern,replacement pattern,text)		     #
#	DEPS sets directory for header file dependancies	     #	
#	LDIR set directory for external libraries		     #
#	ODIR is the .o file temp directory			     #
#								     #
##############################  MACROS  ##############################

NAME = 			libft.a
FILENAMES = 		ft_ultoa \
			ft_strcmp \
			ft_strncmp \
			ft_atoi \
			ft_isalpha \
			ft_isdigit \
			ft_isalnum \
			ft_isascii \
			ft_isprint \
			ft_toupper \
			ft_tolower \
			ft_itoa \
			ft_strsplit \
			ft_strtrim \
			ft_strjoin \
			ft_strsub \
			ft_strmapi \
			ft_strequ \
			ft_strnequ \
			ft_strclr \
			ft_striter \
			ft_striteri \
			ft_strmap \
			ft_strdel \
			ft_strnew \
			ft_memdel \
			ft_memalloc \
			ft_lstmap \
			ft_lstiter \
			ft_lstadd \
			ft_lstnew \
			ft_lstdelone \
			ft_lstdel \
			ft_uitoa_base

CC =			gcc

CFLAGS = 		-Wall -Werror -Wextra
HFLAGS =		-I$(HDIR)
AFLAGS =		ar rcs

HDIR =			./includes
ODIR =			obj
SDIR = 			srcs

_DEPS =			libft.h
DEPS =			$(patsubst %,$(HDIR)/%,$(_DEPS))	        
_OBJ = 			$(FILENAMES:.c=.o)  		        
OBJ = 			$(patsubst %,$(ODIR)/%,$(_OBJ))
SRCS = 			$(patsubst %,$(SDIR)/%,$(FILENAMES))

##############################  TARGETS  ############################## 
#								      # 
#	Using % instead of * allows us to refer to MULTIPLE targets   #
#       -c flag generates object file			      	      #
#       -o $@ puts output in file named LEFT of :		      #
#       $@ is the LEFT of :				      	      #
#       $^ is the RIGHT of :					      #
#       $< is the first item on the dependencies list	      	      #
#								      #
##############################  TARGETS  ##############################

all: $(NAME)

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) $< $(HFLAGS) $(IFLAGS) $(CFLAGS) -c -o $@  
	$(NAME): $(OBJ)
	@echo		Object files generated!
	@echo 		Compiling library...
	$(AFLAGS) $^ $(HFLAGS) $@ 
run:
	@echo 		Running program excecutable...
	@./libft.a
clean:
	@echo 		Cleaning object files...
	@rm -f $(OBJ)
	fclean: clean
	@echo 		Cleaning program excecutable...
	@rm -f $(NAME)
	@echo		Done!
	re: 	fclean all

.PHONY: all clean fclean re
