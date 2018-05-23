#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef LIBFT_H
# define LIBFT_H
    int	    ft_atoi(const char  *nptr);
    int     ft_isalnum(int c);
    int     ft_isalpha(int c);
    int		ft_isascii(int c);
    int		ft_isdigit(int c);
    int		ft_isprint(int c);
    void    *ft_memccpy(void *dst, const void *src, int c, size_t n);
    char    *ft_strcat(char *dst, char *src);
    char    *ft_strchr(const char *s, int c);
    int     ft_strcmp(const char *s2, const char *s1);
    char	*ft_strcpy(char *dst, char *src);
    char    *ft_strdup(const char *s);
    size_t  ft_strlcat(char *dst, const char *src, size_t size);
    size_t	ft_strlen(const char *s);
    size_t	ft_strlen(const char *s);
    char 	*ft_strlcpy(char *dst, char *src, size_t size);
    char    *ft_strncat(char *dst, char *src, size_t n);
    int     ft_strncmp(const char *s2, const char *s1, size_t n);
    char	*ft_strncpy(char *dst, char *src, const int n);
    char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
    char    *ft_strchr(const char *s, int c);
    int		ft_tolower(int c);
    int		ft_toupper(int c);

#endif