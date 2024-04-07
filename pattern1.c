#include <stdio.h>
/**
 * main - the main function is the start of the program.
 * C proram that prints patterns in this case "*".
 * Return: 0 for the successful execution.
 */
int main(void)
{
int i, j;

	for (i = 1; i <= 15; i++)
	{
		for (j = 1; j <= 30; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return (0);
}

