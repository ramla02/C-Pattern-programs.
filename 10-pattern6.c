#include <stdio.h>

/**
 * main - the main function and the start of the program
 * C  program that prints grid which is 5 rows and 5 columns
 * Return: 0 for the successful execution
 */

//int main(void)
//{
//	int n = 5, k = 1;
//	int i, j;

//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//	{
//			printf("%2d", k++);
//		}
//		printf("\n");
//	}
//	return (0);
//}

/* the below code is same but the difference is there is a user input*/

int main(void)
{
	int n, k = 1;
	int i, j;

	printf("Enter the size of the grid: \n");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%5d", k++);
		}
		printf("\n");
	}
	return (0);
}
