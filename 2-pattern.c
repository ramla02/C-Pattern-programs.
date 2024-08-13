#include <stdio.h>

/**
 * main - the main function and the start of the program
 * A c program that prints rectangle pattern
 * Return: 0 for the successful execution
 */

int main(void)
{
	int n = 15;
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if ((j == 1 || j == n) || (i == 1 || i == 0))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return (0);
}
