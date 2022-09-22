#include "main.h"
/**
 * _strcat -concatenate 2 strings
 * @dest: string to append 
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = scr[j]
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
