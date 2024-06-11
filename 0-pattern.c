#include <stdio.h>
/**
* main - the start of the program
* Descrption: a  program that prints rectangle using (*)
* Return: 0 for the successful execution
*/

int main(void)
{
	int i, j;

	for (i = 1; i <= 5; i++)
	{
	for (j = 1; j <= 5; j++)
	{
	printf("*");
	}
	printf("\n");
	}
	return (0);
}



