###################################################################### 
#								     								#	
#       ██╗     ███████╗███╗   ███╗ ██████╗ ███╗   ██╗	     		#
#  	    ██║     ██╔════╝████╗ ████║██╔═══██╗████╗  ██║	     		#
#  	    ██║     █████╗  ██╔████╔██║██║   ██║██╔██╗ ██║	     		#
#       ██║     ██╔══╝  ██║╚██╔╝██║██║   ██║██║╚██╗██║	     		#
#  	    ███████╗███████╗██║ ╚═╝ ██║╚██████╔╝██║ ╚████║	     		#
#  	    ╚══════╝╚══════╝╚═╝     ╚═╝ ╚═════╝ ╚═╝  ╚═══╝	     		#
#				MAKEFILE			     							#
#	CREATED BY:	lmncube					     						#
#	https://github.com/lmncube				     					#
#								     								#
###################################################################### 

#############################  MACROS  ###############################
#								     								#
#	patsubst is a pattern matcher, where % is the wildcard	     	#
#	$(patsubst pattern,replacement pattern,text)		     		#
#	DEPS sets directory for header file dependancies	     		#	
#	LDIR set directory for external libraries		     			#
#	ODIR is the .o file temp directory			     				#
#								     								#
##############################  MACROS  ##############################

NAME = 				libft.a

FILENAMES = 		ft_ultoa.c \
					memset.c \
					bzero.c \
					memmove.c \
					memchr.c \
					memcmp.c \
					memcpy.c \
					memccpy.c \
					strlen.c \
					strdup.c \
					strcpy.c \
					strncpy.c \
					strcat.c \
					strncat.c \
					strlcat.c \
					strchr.c \
					strrchr.c \
					strstr.c \
					strnstr.c \
					strcmp.c \
					strncmp.c \
					atoi.c \
					isalpha.c \
					isdigit.c \
					isalnum.c \
					isascii.c \
					isprint.c \
					toupper.c \
					tolower.c \
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
					ft_lstnew.c \
					ft_lstdelone.c \
					ft_lstdel.c \
					ft_lstadd.c \
					ft_lstiter.c \
					ft_lstmap.c \

CC =				gcc

CFLAGS = 			-Wall -Werror -Wextra
HFLAGS =			-I$(HDIR)
AFLAGS =			ar rcs

HDIR =				./includes
ODIR =				obj
SDIR = 				srcs

_DEPS =				libft.h
DEPS =				$(patsubst %,$(HDIR)/%,$(_DEPS))	        
_OBJ = 				$(FILENAMES:.c=.o)  		        
OBJ = 				$(patsubst %,$(ODIR)/%,$(_OBJ))
SRCS = 				$(patsubst %,$(SDIR)/%,$(FILENAMES))

##############################  TARGETS  ############################## 
#								      								# 
#	Using % instead of * allows us to refer to MULTIPLE targets  	#
#       -c flag generates object file			      	      		#
#       -o $@ puts output in file named LEFT of :		      		#
#       $@ is the LEFT of :				      	      				#
#       $^ is the RIGHT of :					      				#	
#       $< is the first item on the dependencies list	      	    #
#								      								#
##############################  TARGETS  ##############################

all: $(NAME)

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
					$(CC) $< $(HFLAGS) $(IFLAGS) $(CFLAGS) -c -o $@  
$(NAME): $(OBJ)
					@echo		Object files generated!
					@echo 		Compiling library...
					$(AFLAGS) $^ $(HFLAGS) $(IFLAGS) $(CFLAGS) -o $@  
					@echo		Done! Type \"make run\" to run executable
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

.PHONY: clean fclean re
