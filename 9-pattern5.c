#include <stdio.h>


/**
 * main - the main function and the start of the program
 * C program that prints 1 to 5 backward
 * Return: 0 for the successful execution
 */

int main(void)
{
	int i, j;

	for (i = 5; i >= 1; i--)
	{
		for (j = 5; j >= 1; j--)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	return (0);
}
