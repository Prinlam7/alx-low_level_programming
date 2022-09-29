#include "main.h"
/**
 * _strlen_recursion - returns lenght of a string
 * @s: string to calcuclate
 * Return: lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
