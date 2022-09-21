#include "main.h"
/**
 * _puts - print a string to stdout
 * @str: pointer
 */
void _puts(char *str)
{
	int;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
