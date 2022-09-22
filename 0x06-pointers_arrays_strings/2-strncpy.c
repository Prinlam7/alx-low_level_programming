#include "main.h"
/**strncpy - copie a string
 * @dest: destination string
 * @src: sourse string
 * @n: number of bytes
 * Return: pointer 
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
