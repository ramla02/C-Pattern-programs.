#include <stdio.h>

/**
 * main - the main function  and the start of the program
 * C program that prints 5x3 grid of numbers
 * Return: 0 for the successful execution
 */

int main(void)
{
	int i, j;

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 3; j++)
		{
			printf(" %d %d", i, j);
		}
		printf("\n");
	}
	return (0);
}
