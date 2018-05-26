/**************************************************
 * File Name : ft_strcmp.c
 * Creation Date : 22-02-2018
 * Last Modified : Thu 22 Feb 2018 05:41:47 PM SAST
 * Created By :		lmncube
 * https://github.com/luyandamncube
 **************************************************/
#include "libft.h"

int     ft_strcmp(const char *s2, const char *s1)
{
	/*man page req:
        -compare two strings
        -finds if s1 is less than, mathces or is greater than s2
        -performs binary comparison of characters
        NOTE:
            >Theoretically you could have then negetive integers as paramaters
            >remember that char is INTEGER. it's just the smallest integer type. 
            >e.g. 0xFF and FF are the same. as a char it is -1 but unsigned it is 255
            >"values in memory may be the same although the bits used to represent them might differ"
            >ANY time we subtract/add integers, make sure to check if you should use unsigned
    */
    int k;

    k = 0;
    while(s1[k]) //While s1 not null AND s1 = s2 (char are the same)
    {
        if (s1[k] != s2[k])
            return(s2[k]-s1[k]);
        k++;
    }    
    return(s2[k]-s1[k]);
}
