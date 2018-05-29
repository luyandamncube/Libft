#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdio.h>                  //REMOVE AFTER TESTING OF FUNCTIONS
#include <stdlib.h>                 //REMOVE AFTER TESTING OF FUNCTIONS
#include <unistd.h>

                            /*PART 1 */
/*TESTED*/int	            ft_atoi(const char  *nptr);
/*TESTED*/int               ft_isalnum(int c);
/*TESTED*/int               ft_isalpha(int c);
/*TESTED*/int		        ft_isascii(int c);
/*TESTED*/int		        ft_isdigit(int c);
/*TESTED*/int		        ft_isprint(int c);                                                  //(15/29)
/*TESTED*/int		        ft_tolower(int c);                                                  //(24/29)
/*TESTED*/int		        ft_toupper(int c);                                                  //(24/29)
/*TESTED*/int               ft_strcmp(const char *s2, const char *s1);                          //(13/14) Change testing method
/*TESTED*/int               ft_strncmp(const char *s2, const char *s1, size_t n);               //(13/14)
/*TESTED*/size_t            ft_strlcat(char *dst, const char *src, size_t size);                //Passes. Don't know what return value should be though...
/*TESTED*/size_t	        ft_strlen(const char *s);
/*TESTED*/char              *ft_strcat(char *dest, char *src);
/********/char              *ft_strchr(const char *s, int c);
/********/char	            *ft_strcpy(char *dst, char *src);
/********/char              *ft_strdup(const char *s);
/********/char 	            *ft_strlcpy(char *dst, char *src, size_t size);
/*TESTED*/char              *ft_strncat(char *dest, char *src, size_t n);
/********/char	            *ft_strncpy(char *dst, char *src, const int n);
/********/char              *ft_strnstr(const char *haystack, const char *needle, size_t len);
/********/char              *ft_strchr(const char *s, int c);
/********/char		        *ft_strstr(const char *haystack, const char *needle);
/*TESTED*/void              *ft_memccpy(void *dest, const void *src, int c, size_t n);
/********/void              *ft_memmove(void * dest, const void *src,  size_t n);               //A LOT more compliated, do research :(
/********/void              *ft_memchr(const void *s, int c , size_t n);
/*TESTED*/int               *ft_memcmp(const void *s1, const void *s2 , size_t n);              //Tested... Sorta
/*TESTED*/void              *ft_memset(void * s, int c, size_t n);
/*TESTED*/void              ft_bzero(void *s , size_t n);

                            /*PART 2 */
/*******/char				*ft_itoa(int n);
/*******/void				ft_putchar_fd(char c, int fd);
/*******/void				ft_putchar(char c);
/*******/void				ft_putstr_fd(const char *s, int fd);
/*******/void				ft_putstr(const char *s);
/*******/void				ft_putendl_fd(const char *s, int fd);
/*******/void				ft_putendl(const char *s);
/*******/void				ft_putnbr_fd(int n, int fd);
/*******/void				ft_putnbr(int n);
/*******/void				*ft_realloc(void *ptr, size_t size);
/*******/void				ft_strdel(char **as);
/*******/void				ft_strclr(char *s);
/*******/void				ft_striter(char *s, void (*f)(char *));
/*******/void				ft_striteri(char *s, void (*f)(unsigned int, char *));
/*******/void				*ft_memalloc(size_t size);
/*******/void				ft_memdel(void **ap);
/*******/int				ft_strequ(const char *s1, char const *s2);
/*******/int				ft_strnequ(const char *s1, char const *s2, size_t n);
/*******/char				*ft_strtrimc(const char *s, char c);
/*******/char				*ft_strnew(size_t size);
/*******/char				*ft_strmap(const char *s, char (*f)(char));
/*******/char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
/*******/char				*ft_strsub(const char *s, unsigned int start, size_t len);
/*******/char				*ft_strjoin(const char *s1, char const *s2);
/*******/char				*ft_strtrim(const char *s);
/*******/char				**ft_strsplit(const char *s, char c);

    /*BONUS */
    /*
    typedef struct		s_list
    {
        void			*content;
        size_t			content_size;
        struct s_list	*next;
    }					t_list;

    t_list				*ft_lstnew(void const *content, size_t content_size);
    t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
    void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
    void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
    void				ft_lstadd(t_list **alst, t_list *new);
    void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));

    int					ft_nlen(int n);
    void				ft_swapchar(char *p1, char *p2);
    void				ft_swapbyte(void *p1, void *p2);
    char				*ft_strrev(char *s);
    */
#endif