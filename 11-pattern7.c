#include <stdio.h>

/**
 * main- the main function and the start of the program
 * A  c code that prints a grid of numbers where each number is incremented
 * by 2 from the previous one.
 * Return: 0 for the successful execution
 */

int main(void)
{
	int n = 5;
	int i, j;
	int x = 1;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%5d", x);
			x += 2;
		}
		printf("\n");
	}
	return (0);
}
