/**************************************************
 * File Name : ft_strlen.c
 * Creation Date : 22-02-2018
 * Last Modified : Thu 22 Feb 2018 04:27:28 PM SAST
 * Created By :		lmncube
 * https://github.com/luyandamncube
 **************************************************/

int	ft_strlen(char *str)
{
	int k;

	k = 0;
	while (*str++)
		k++;
	return (k);
}
