#include <stdio.h>

/**
 * main - print all single digit
 *
 * REturn: Always 0 (successful)
 */
int main(void)
{
	int n;
	
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
