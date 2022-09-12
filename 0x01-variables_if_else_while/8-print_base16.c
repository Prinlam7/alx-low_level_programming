#include <stdio.h>

/**
 * main - print all numin base 16 in lowercase
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int n;
	char ch;
	
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
