#include <stdio.h>

/**
 * main - the main function and the start of the program
 * A c program that prints number wave pattern
 * Return: 0 for the successful execution
 */

int main(void)
{
	int wave_height = 5;
	int wave_length = 4;
	int i, j, k;

	for (i = 0; i < wave_height; i++)
	{
		for (j = 0; j < wave_length; j++)
		{
			for (k = 0; k < wave_height - i - 1; k++)
			{
				printf("  ");
			}

			/* Print the upward part of the wave */
			printf("%02d", i + 1);

			for (k = 0; k < i * 2; k++)
			{
				printf("  ");
			}

			/*
			 * Print the downward part of the wave
			 * if not at the peak
		       **/
			if (i != wave_height - 1)
			{
				printf("%02d", i + 1);
			}

			printf("    ");
		}
		printf("\n");
	}

	return (0);
}
