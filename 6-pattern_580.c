#include <stdio.h>

/**
 * main - the main function and the start of the program
 * C pattern program that prints * w
 * Return: 0 for the successful execution
 */

int main(void)
{
	int n = 15;
	int i, j;
	int x = n;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < 2 * n; j++)
		{
			if (j == 1 || j == 2 * n - 1 || j == x || j == 2 * n - x)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		x--;
	}
	return (0);
}
