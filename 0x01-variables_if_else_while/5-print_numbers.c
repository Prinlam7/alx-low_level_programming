#include <stdio.h>

/**
 * man - print numbers from 0 to 9
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	return (0);
}
