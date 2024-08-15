#include <stdio.h>

/**
 * main - is the main function and the start of the program
 * A triangle pyramid in c program
 * Return: 0 for the successful execution
 */

int main(void)
{
	int p_height = 13;
	int p_space = p_height - 1;
	int i, j, k;
	int n, x = 1;

	/* top part of the pyramid */

	for (i = 1; i <= p_height; i++)
	{
		/* broad space */
		for (n = 1; n <= p_height; n++)
			printf(" ");

		for (k = p_space; k >= i; k--)
			printf(" ");

		for (j = 1; j <= i; j++)
			printf("* ");
		printf("\n");
	}

	/* bottom part of the pyramid */

	for (i = 0; i < p_height; i++)
	{
		for (j = p_space; j > i; j--)
		{
			printf(" ");
		}
		for (k = 0; k <= i; k++)
		{
			printf("* ");
		}

		for (n = (p_height + p_height - 2); n >= x; n--)
		{
			printf(" ");
		}
		for (k = 0; k <= i; k++)
		{
			printf("* ");
		}
		x += 2;
		printf("\n");
	}
	return (0);
}
