#include <stdio.h>

/**
 * main - the main function and the start of the program
 * A c program that prints 1 to 5
 * Return: 0 for the successful execution
 */

int main(void)
{
	int i, j;

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	return (0);
}
