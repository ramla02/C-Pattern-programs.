#include <stdio.h>

int main() 
{
    int n = 5;
    int i, j;
    
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                printf("*  ");
            }
            else
            {
                printf("#  ");
            }
        }
        printf("\n");
    }

    return (0);
}
