#include <stdio.h>

int main() 
{
    int n = 5;
    int i, j;
    
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%2d ", i % 2);
        }
        printf("\n");
    }

    return (0);
}
