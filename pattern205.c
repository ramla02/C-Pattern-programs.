#include <stdio.h>

int main() 
{
    int n = 5;
    int i, j;
    
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= n / 2)
            printf("0 ");
            else
            printf("1 ");
        }
        printf("\n");
    }

    return (0);
}
