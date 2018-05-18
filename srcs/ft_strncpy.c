/**************************************************
 * File Name : ft_strncpy.c
 * Creation Date : 22-02-2018
 * Last Modified : Thu 22 Feb 2018 04:52:47 PM SAST
 * Created By :		lmncube
 * https://github.com/luyandamncube
 **************************************************/

char	*ft_strncpy(char *dst, , char *src, const int n)
{
	 /*man page req:
        -size-bounded string copying
        -error filled way to copy a string
        -if size > 0, null-terminate
    */
	int k;

	k = 0;
	if (n > 0)
	{
		while (k < n)
		{
			dst[k] = src[k];
			k++;
		}
		dst[k] = '\0';
	}
	
	return (dst);
}
