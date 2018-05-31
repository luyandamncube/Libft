#include "libft.h"

char				**ft_strsplit(const char *s, char c)
{
    /*
        man req:
            - Allocates (with malloc(3)) and returns an array of “fresh” strings (all ending with ’\0’, including the array itself) 
            obtained by spliting s using the character c as a delimiter. 
            - If the allocation fails the function returns NULL. 
            Example : ft_strsplit("*hello*fellow***students*", ’*’) re- turns the array ["hello", "fellow", "students"].
            LOGIC:
                1 - count how many words the string has (c deliminated)
                2 - check size of both words (_small, _big)
                3 - allocate memory for each word
                4 - allocate 2D space, horizontal length is 3, vert length is _big
                5 - store words in 2D array, deliminate 3rd element with 0
        NEED HELPER FUNCTION :( 
    */

    size_t find_c;
    size_t k,m,n;
    char * s1;
    char * s2;

    find_c = 0;
    k = 0;
    m = 0;
    while(s[k])
    {
        if (s[k] == c)
            find_c = k;
        k++;
    }
    s1 = (char*)malloc(sizeof(char)*(find_c)+1);
    s2 = (char*)malloc(sizeof(char)*(k - find_c)+1);
    if (s1 == NULL || s2 == NULL)
        return(NULL);
    while(s1[m])
    {
        s1[m] = s[m];
        m++;                                    //m holds len of s1+1
    }
    s1[m] = '\0';
    n = m + 2;
    while(s2[n])
    {
        s2[n] = s[n];                           //n holds len of s2+1
        n++;
    }
    s2[n] = '\0';

    //Return type??
}