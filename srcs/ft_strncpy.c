/**************************************************
 * File Name : ft_strncpy.c
 * Creation Date : 22-02-2018
 * Last Modified : Thu 22 Feb 2018 04:52:47 PM SAST
 * Created By :		lmncube
 * https://github.com/luyandamncube
 **************************************************/

char	*ft_strncpy(char *dst, const int nb, char *src)
{
	int k;

	k = 0;
	if (nb > 0)
	{
		while (k < nb)
		{
			dst[k] = src[k];
			k++;
		}
	}
	dst[k] = '\0';
	return (des);
}
