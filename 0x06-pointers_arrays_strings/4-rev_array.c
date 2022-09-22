#include "main.h"
/**
 * reverse_array - re verse an array of integals
 * @a: array
 * @n: number of element
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;
	for (i = 0, i < n / 2, i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
