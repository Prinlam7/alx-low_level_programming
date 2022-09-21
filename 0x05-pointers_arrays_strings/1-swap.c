#include "main.h"
/**
 * swap_int - swap the value of 2 integal
 * @a: pointer
 * @b: pointer
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
