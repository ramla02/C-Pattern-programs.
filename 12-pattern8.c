#include <stdio.h>

/**
 * main - the main function and the start of the program
 * C program that prints by adding 2 to the next number till 200
 * Return: 0 for the successful execution
 */

int main(void)
{
	int n = 10;
	int i, j;
	int x = 2;

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
