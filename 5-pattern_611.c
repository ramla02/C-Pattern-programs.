#include <stdio.h>

/**
 * main - is the main function and the start of the program
 * C pattern program
 * Return: 0 for the successful execution
 */

int main(void)
{
	int n = 8;
	int i, j;
	int x = 1;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n / 2 + 1; j++)
		{
			if (j == 1 || i == 1 || i == n / 2 + 1 ||
			    (i <= n / 2 && j == n / 2 + 1)
			    || j == x)
			{
				printf("R");
			}
			else
			{
				printf(" ");
			}
		}
		if (i > n / 2)
			x++;
		printf("\n");
	}

	return (0);
}
