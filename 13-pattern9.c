#include <stdio.h>

/**
 * main - the main function and the start of the program
 *
 * Return: 0 for the successful execution
 */

int main(void)
{
	int n = 10;
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%5d", i * j);
		}
		printf("\n");
	}
	return (0);
}
