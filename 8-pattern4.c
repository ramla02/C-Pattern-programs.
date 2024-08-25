#include <stdio.h>

/**
 * main - the main function and the start of the program
 * A c program that prints 1 to 5 in descending order.
 * Return: 0 for the successful execution
 */

int main(void)
{
	int i, j;

	for (i = 5; i >= 1; i--)
	{
		for (j = 1; j <= 5; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	return (0);
}
