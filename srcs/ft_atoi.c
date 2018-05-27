/**************************************************
 * File Name : ft_atoi.c
 * Creation Date : 22-02-2018
 * Last Modified : Thu 22 Feb 2018 10:53:56 PM SAST
 * Created By :		lmncube
 * https://github.com/luyandamncube
 **************************************************/
#include "libft.h"

int	ft_atoi(const char  *nptr)
{
	/*man page req:
		-*nptr is the same as nullptr from C++
		-convert string to an integer (ascii to int)
		-atoi does not detect errors
	*/
	int sign;
	int k;

	sign = 1;
	k = 0;
	
	//Skip Escape Characters, 32 is space, 9-13 are the escape characters
	while ((*nptr) || (*nptr >= 9 && *nptr <= 13 ))	//(*nptr == 32 || (*nptr >= 9 && *nptr <= 13 ))
		++nptr;
	//Sign of integer expression
	if (*nptr == '+' || *nptr == '-')
		sign = (*nptr++ == '-'  ? -1 : 1); 			// sign = (*nptr == '-'  ? -1 : 1); 
	//Is string to int conversion algorithm 		
	while (*nptr >= '0' && *nptr <= '9') 			//(*nptr != '\0' || *nptr >= '0' ||  *nptr <= '9')
		k = k*10 + (*nptr++ - '0');
	return (k*sign);
}
