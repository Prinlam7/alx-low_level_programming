#include <stdio.h>

/**
 * main - print alphabet reverse in lowercase
 *
 * REturn: Always 0 (successful)
 */
int main(void)
{
	char n;
	
	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
