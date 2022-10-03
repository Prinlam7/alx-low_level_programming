#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: number of argument
 * @argv: array of arguments
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
