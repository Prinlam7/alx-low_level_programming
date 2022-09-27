#include <stdio.h>
#include "main.h"
/**
 * *_strpbrk - search a string for any set of byte
 * @s: string
 * @accept: string containning the byte
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
