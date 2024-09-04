#include <stdio.h>

/**
 * main - the main function and the start of the program
 * Return: 0 for the successful execution
 */

int main(void)
{
    int n = 5;
    int i, j, x;

    for (i = 1; i <= n; i++)
    {
	x = i;
	for (j = 1; j <= n; j++)
	{
	    printf("%3d", x);
	    x += n;
	}
	printf("\n");
    }
    return (0);
}
