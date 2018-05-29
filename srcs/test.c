/*
    TEST SCRIPT FOR TESTING LIBFT FUNCTIONS
    USAGE: 
    1   sh test.sh
    2   ./test ft_name.c
*/
#include "libft.h"

/*
    - llu: long long unsigned (%llu). 0 - +18,446,744,073,551,615
*/

#define KILOBYTE (1024llu)
#define MEGABYTE (KILOBYTE * KILOBYTE)
#define GIGABYTE (KILOBYTE * KILOBYTE * KILOBYTE)
#define ASSERT_EQ_STR(X, Y)	(X) && (Y) && (X == Y) && strcmp(X,Y) == 0 ? 1 : 0
#define ASSERT_EQ(X, Y)	((X == Y) ? 1 : 0)
#define ASSERT_IS_NULL(X) ((X == NULL) ? 1 : 0))
/* 
    ARRAYS FOR COMPARTIVE TESTS
    -Allows iterative input for function comparisons
    USAGE: ft_strleny(str[k]);
 */
int num[9] = {1,0,2147483647, -2147483648, 1024, 42, -42, 9999};
char chr[20] = {
                'a','A','z','Z','\0',' ','\v','\n','\r','\t','\b',
                '%', 'a' + 0x100, '0', '1', '2','%','\t','\n','\b'
                };
char *str[15] = {
                    "abcdefghijklmnopqrstuvwxyz","b\0ab","aa\n", "42", 
                    "    -45", "56070707", "56 5  wd 56","01-156-12302147483647-21474838",
                    "***sup****!**", "abc\0\0\0", "aaa\0aaa", "\0\0\0\0\0\0","\t\t\n\t\t   ",
                    "\t\n  \tAAA \t BBB\t\n  \t"
                };
char *str2[15] = {
                    "abcdefghijklmnopqrstuvwxyz","b\0a","ba\n", "4", 
                    "    -65", "560", "56 5  wd 56", "01-156-12334147483647-21474838",
                    "***sup****!**", "abc\0\0\0", "aaa\0aaa", "nbs\0\0\0","\t\t\n\t\t   ",
                    "\t\n  \tABA \t BBB\t\n  \t"
                };

char *asc[32] = {
                    " -sfecf", " ", "+2798", "+0089", "a56", "      --s8" , "0001020304",
                    "000000000000000110", "-153", "+132", "++876", "--132", "wert ", " 1",
                     "42jk ", " 21", "     32 ", "\n          42 24", "1-2", "4+2", "  +442",
                      "  -4232", "4,5", "+", "-", "-+1", "+-1", "\200123", "123\200", 
                      "  \t\n  \r\r\v\f-899", "-2147483648", "2147483647"
                };
char *dupe[5] = {
                    "abc\0\0\0","abc\0\0\0","abc\0\0\0", "abc\0\0\0"
                };   
char *dupe2[5] = {
                    "abcccc","abcccc","abcccc", "abcccc"
                };     
            
/*
    strlcat(strdup(dup), "ccc", 0) == 3
    strlcat(strdup(dup), "ccc", 1) == 4
    strlcat(strdup(dup), "ccc", 6) == 6
    strlcat(strdup(dup), "ccc", 10) == 6      
*/             

char 	*ext_remove(char* mystr) 
{
    char *retstr;
    char *lastdot;
    if (mystr == NULL)
        return NULL;
    if ((retstr = malloc(strlen (mystr) + 1)) == NULL)
        return NULL;
    strcpy (retstr, mystr);
    lastdot = strrchr (retstr, '.');
    if (lastdot != NULL)
        *lastdot = '\0';
    return retstr;
}

int main(int argc, char **argv)
{
/* 
    MEMORY ALLOCATION AREAS FOR SRC_DST TESTS
    -Fills memory area src with the character 'A'
    USAGE: ft_strcpy(dst, str[k]);
    NOTE: allocate memory in main function, in C it becomes unstable if allocated globally 
    NOTE: neither src nor dst are 2D arrays, remember to use them correctly when decideing parameters
*/
    size_t	size = MEGABYTE * 64;
    char	*src = malloc(size + 1);
    char	*dst = malloc(size + 1);
    int test_1 = 0;
    int test_2 = 0;
    int count = 0;
    int pass_counter = 0;
    char *ft_name = (argv[1]);   
    char	buf[20];
    bzero(buf, 10);
    strcpy(buf, "abcdefghijklmnop");

        //mt_assert(strcmp(buf, "abcabcdef") == 0);
    printf("TESTS FOR %s: \n", ext_remove(ft_name));
	printf("==============================\n");
    if (argc == 2)
    {
        while (test_1 < 6)
        {
            if (strchr(buf,'c') == 3)
            {
                printf("PASS:  test %d\n", test_1+1);
                pass_counter++;
            } 
            else
            {
				printf("FAIL: Output %d %d\n", strchr(buf,'c'), 4);
            }
                
            test_1++;
        }
        /*
        while (test_2 < 14)
        {
            if (ASSERT_EQ(atoi(asc[test_2]), ft_atoi(asc[test_2])))
            {
                printf("PASS:  test %d\n", test_2+test_1+1);
                pass_counter++;
            }
            else
            {
				printf("FAIL: Output %d , %d\n", atoi(str[test_2]) , ft_atoi(str[test_2]));
            }
                
            test_2++;
        }
        */
        if (pass_counter == test_1 + test_2)
            printf("SUCCESS!");
        else
		{
			printf("==============================\n");
			printf("COUNT: %d \n", test_1 + test_2);
            printf("%d tests passed...", pass_counter);
		}
    }
    else 
    {
        printf("ERROR. Usage: './test ft_name.c'");
    }
	return (0);
}