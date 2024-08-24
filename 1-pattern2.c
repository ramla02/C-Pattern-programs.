#include <stdio.h>

/**
 * main - Entery point
 * a c programs that prints 1 to 9  in pattern form.
 * Return: 0 for successful execution.
 */

int main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	return (0);
}
