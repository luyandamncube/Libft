/*
    Usage: 
    1   sh test.sh
    2   ./test ft_name.c
*/
#include "libft.h"

int num[9] = {1,0,2147483647, -2147483648, 1024, 42, -42, 9999};
char chr[12] = {'a','A','z','Z','\0',' ','\v','\n','\r','\t','\b','%'};
char *str[10] = {
                    "abcdefghijklmnopqrstuvwxyz","b\0ab","aa\n",
                    "01-156-12302147483647-21474838","***sup****!**", "abc\0\0\0",
                    "aaa\0aaa", "\0\0\0\0\0\0","\t\t\n\t\t   ","\t\n  \tAAA \t BBB\t\n  \t"
                };

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
void lastCharDel (char *name)
{
     int length;
     length = strlen(name);//Get length of string
     name[length - 2] = '\0';//Set next to last char to null
     return;
}
//void t_1(s,int (*sys)(char*), int (*mine)(char *))
int main(int argc, char **argv)
{   
    int i = 0;
    int pass_counter = 0;
    char *ft_name = (argv[1]);
    char ft_func = (char*)malloc(sizeof(char)*strlen(ft_name));
    int func_len = strlen(ft_name);
    ft_func[func_len-2] ='\0';

    printf("TESTS FOR %s:\n", ft_name);

    if (argc == 2)
    {
        //Change fail count to match no of tests
        while (i < 10)
        {
            if (strlen(str[i]) == ft_strlen(str[i]))
            {
                printf("PASS:  test %d\n", i+1);
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
        else
            printf("Only %d functions passed...", pass_counter);
        return (0);
    }
    else 
    {
        printf("ERROR. Usage: './test ft_name.c'");
    }
}