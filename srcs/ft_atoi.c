/**************************************************
 * File Name : ft_atoi.c
 * Creation Date : 22-02-2018
 * Last Modified : Thu 22 Feb 2018 10:53:56 PM SAST
 * Created By :		lmncube
 * https://github.com/luyandamncube
 **************************************************/

int	ft_atoi(char  *str)
{
	int sign;
	int k;

	sign = 1;
	k = 0;
	//Skip Escape Characters, 32 is space, 9-13 are the escape characters
	while ((*str) || (*str >= 9 && *str <= 13 ))
		++str;
	//Sign of integer expression
	if (*str == '+' || *str == '-')
		sign = (*str++ == '-'  ? -1 : 1);
	//Is string to int conversion algorithm 
	while (*str >= '0' && *str <= '9')
		k = k*10 + (*str++ - '0');

	return (k*sign);
}
