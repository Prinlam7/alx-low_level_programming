#include "main.h"

/**
 * main - print alphabet in lowercase
 *
 * Return: Always 0 (successful)
 */
void print_alphabet(void) /* entry point*/
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}