#include <stdio.h>
#include "main.h"
/**
 * _atoi - convert a string to an integal
 * @s: string to be converted
 * Return: int converted
 */
int _atoi(char *s)
{
	int i, d, n, f, len, digit;

	i = 0;
	d = 0;
	n = 0;
	f = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
			{
				digit = -digit;
			}
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
	{
		return (0);
	}
	return (n);
}

/**
 * main - adds 2 positive number
 * @argc: num of arg
 * @argv: array
 * Return 0 or 1
 */

int main(int argc, char *argv[])
{
	int sum, num,i, j, k;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = _atoi(argv[k]);
		if (num >= 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
