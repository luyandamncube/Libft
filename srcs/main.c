#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

# define TRUE 1
# define FALSE 0 
# define NOTHING NULL

/***************** NUMBERS *****************/
# define _01 2147483647                                        //Largest pos int
# define _02 -2147483647                                       //Largest neg int
# define _03 1024                                              //Buffer size
# define _04 42
# define _05 -42
# define _06 9999

/***************** STRINGS *****************/
# define _07 'a'
# define _08 'A'
# define _09 'z'
# define _10 'Z'
# define _11 'a' + 0x100
# define _12 "abcdefghijklmnopqrstuvwxyz"
# define _13 "ab\0ab"                                           //memcmp
# define _14 "aa\n"                                             //putendl
# define _15 "01-156-12302147483647-21474838"                   //putnbr
# define _16 "***sup****!**"                                    //strsplit

/***************** MEMORY *****************/
# define _17 "abc\0\0\0"
 /* strlcat(strdup("abc\0\0\0"), "ccc", 0) == 3
    strlcat(strdup("abc\0\0\0"), "ccc", 1) == 4
    strlcat(strdup("abc\0\0\0"), "ccc", 6) == 6
    strlcat(strdup("abc\0\0\0"), "ccc", 10) == 6      
 */             
# define _18 "aaa\0aaa"                                        //strlen, strcmp
# define _19 "\0\0\0\0\0\0"                                    //memcmp(str, "\0\0\0\0\0\0", 7) == 0

/************** ESCAPE CHARS **************/
# define _20 '\0'
# define _21 ''
# define _22 ' '
# define _23 '\v'
# define _24 '\n'
# define _25 '\r'
# define _26 '\t'
# define _27 '\b'
# define _28 '%' 
# define _29 "\t\t\n\t\t   "                                   //strsplit
# define _30 "\t\n  \tAAA \t BBB\t\n  \t"                      //strtrim: "AAA \t BBB" 

/************** ASSERTIONS **************/
# define ASSERT_TRUE(X)(X == TRUE ? TRUE : FALSE)              //Check value is non-zero                  
# define ASSERT_FALSE(X)(X == FALSE ? TRUE : FALSE)            //Check value is zero                
# define ASSERT_EQUAL(X,Y)(X == Y ? TRUE : FALSE)              //Check actual == expected    
# define ASSERT_NOT_EQUAL(X,Y)(X != Y ? TRUE : FALSE)          //Check actual != expected    
# define ASSERT_PTR_NULL(X)(X == NOTHING ? TRUE : FALSE)       //Check pointer == NULL             
# define ASSERT_PTR_NOT_NULL(X)(X != NOTHING ? TRUE : FALSE)   //Check pointer != NULL    

int main()
{   
    char *_names = "_00";
    char *t_1;
    t_1 = (char*)malloc(sizeof(char)*26);
    t_1 = _12;
    printf("System: %d", strlen(t_1));
    printf("Libft: %d", ft_strlen(t_1));
    return (0);
}