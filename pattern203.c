#include <stdio.h>

int main() 
{
    int i, j;
    
    for (i = 0; i <= 4; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j <= i)
            printf("0  ");
            else
            printf("%d  ", i + j);
        }
        printf("\n");
    }

    return (0);
}
