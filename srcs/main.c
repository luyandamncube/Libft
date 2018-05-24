#include "libft.h"
/*
    USAGE
    -gcc -Werror -Wextra -Wall main.c ./ft_funcname.c ../includes
    -change lib_name in typedef line to libft function
    -change sys_name in typedef line to system function
*/

int num[9] = {1,0,2147483647, -2147483648, 1024, 42, -42, 9999};
char chr[12] = {'a','A','z','Z','\0',' ','\v','\n','\r','\t','\b','%'};
char *str[10] = {"abcdefghijklmnopqrstuvwxyz","b\0ab","aa\n","01-156-12302147483647-21474838","***sup****!**", "abc\0\0\0","aaa\0aaa", "\0\0\0\0\0\0","\t\t\n\t\t   ","\t\n  \tAAA \t BBB\t\n  \t"};

/* strlcat(strdup("abc\0\0\0"), "ccc", 0) == 3
    strlcat(strdup("abc\0\0\0"), "ccc", 1) == 4
    strlcat(strdup("abc\0\0\0"), "ccc", 6) == 6
    strlcat(strdup("abc\0\0\0"), "ccc", 10) == 6      
*/             
# define TRUE 1
# define FALSE 0
# define NOTHING NULL
# define ASSERT_TRUE(X)(X == TRUE ? TRUE : FALSE)              //Check value is non-zero                  
# define ASSERT_FALSE(X)(X == FALSE ? TRUE : FALSE)            //Check value is zero                
# define ASSERT_EQUAL(X, Y)(X == Y ? TRUE : FALSE)              //Check actual == expected    
# define ASSERT_NOT_EQUAL(X,Y)(X != Y ? TRUE : FALSE)          //Check actual != expected    
# define ASSERT_PTR_NULL(X)(X == NOTHING ? TRUE : FALSE)       //Check pointer == NULL             
# define ASSERT_PTR_NOT_NULL(X)(X != NOTHING ? TRUE : FALSE)   //Check pointer != NULL    

//void t_1(s,int (*sys)(char*), int (*mine)(char *))
int main()
{   
    int i = 0;
    int pass_counter = 0;

    //Change fail count to match no of tests
    while (i < 10)
    {
        if (strlen(str[i]) == ft_strlen(str[i]))
        {
            printf("PASS:  test %d\n", i);
            pass_counter++;
        }
            
        else
        {
            printf("FAIL:  test %d\n", i);
        }
            
        i++;
    }
    if (pass_counter == i)
           printf("SUCCESS!");
    return (0);
}