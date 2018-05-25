/*
    Usage: 
    1   sh test.sh
    2   ./test ft_name.c
*/
#include "libft.h"

int num[9] = {1,0,2147483647, -2147483648, 1024, 42, -42, 9999};
char chr[20          ] = {'a','A','z','Z','\0',' ','\v','\n','\r','\t','\b','%', 'a' + 0x100, '0', '1', '2','%','\t','\n','\b'};
char *str[15] = {
                    "abcdefghijklmnopqrstuvwxyz","b\0ab","aa\n", "42", "    -45", "56070707", "56 5  wd 56", 
                    "01-156-12302147483647-21474838","***sup****!**", "abc\0\0\0",
                    "aaa\0aaa", "\0\0\0\0\0\0","\t\t\n\t\t   ","\t\n  \tAAA \t BBB\t\n  \t"
                };
char *str2[15] = {
                    "abcdefghijklmtypqrstuvwxyz","b\0ab","ba\n", "41", "    -45", "56070707", "56 5  wd 56", 
                    "01-156-12334147483647-21474838","***sup****!**", "abc\0\0\0",
                    "aaa\0aaa", "\0\0\0\0\0\0","\t\t\n\t\t   ","\t\n  \tABA \t BBB\t\n  \t"
                };
char *asc[32] = {
                    " -sfecf", "", "+2798", "+0089", "a56", "      --s8" , "0001020304","000000000000000110", "-153",
                    "+132", "++876", "--132", "wert ", " 1", "42jk ", " 21", "     32 ", "\n          42 24", "1-2", 
                     "4+2", "  +442", "  -4232", "4,5", "+", "-", "-+1", "+-1", "\200123", "123\200", "  \t\n  \r\r\v\f-899",
                     "-2147483648", "2147483647"
                };
/* strlcat(strdup("abc\0\0\0"), "ccc", 0) == 3
    strlcat(strdup("abc\0\0\0"), "ccc", 1) == 4
    strlcat(strdup("abc\0\0\0"), "ccc", 6) == 6
    strlcat(strdup("abc\0\0\0"), "ccc", 10) == 6      
*/             

char 	*ext_remove(char* mystr) 
{
    char *retstr;
    char *lastdot;
    if (mystr == NULL)
         return NULL;
    if ((retstr = malloc (strlen (mystr) + 1)) == NULL)
        return NULL;
    strcpy (retstr, mystr);
    lastdot = strrchr (retstr, '.');
    if (lastdot != NULL)
        *lastdot = '\0';
    return retstr;
}

int main(int argc, char **argv)
{   
    int test_1, test_2 = 0;
    int pass_counter = 0;
    char *ft_name = (argv[1]);    
                                                                                                                                                                                                
    printf("TESTS FOR %s: \n", ext_remove(ft_name));
	printf("==============================\n");
    if (argc == 2)
    {
        //Change fail count to match no of tests
        while (test_1 < 20)
        {
            if (toupper(chr[test_1]) == ft_toupper(chr[test_1]))
            {
                printf("PASS:  test %d\n", test_1+1);
                pass_counter++;
            }
            else
            {
				printf("FAIL: Output %d , %d\n", toupper(chr[test_1]) , ft_toupper(chr[test_1]));
            }
                
            test_1++;
        }
		
		while (test_2 < 9)
        {
            if (toupper(num[test_2]) == ft_toupper(num[test_2]))
            {
                printf("PASS:  test %d\n", test_2+test_1+1);
                pass_counter++;
            }
            else
            {
				printf("FAIL: Output %d , %d\n", toupper(num[test_2]) , ft_toupper(num[test_2]));
            }
                
            test_2++;
        }
		
        if (pass_counter == test_1 + test_2)
            printf("SUCCESS!");
        else
		{
			printf("==============================\n");
			printf("COUNT: %d \n", test_1 + test_2);
            printf("Only %d tests passed...", pass_counter);
		}
    }
    else 
    {
        printf("ERROR. Usage: './test ft_name.c'");
    }
	return (0);
}