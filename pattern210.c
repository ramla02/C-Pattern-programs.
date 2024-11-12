#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n = 5;
    int i, j;
    
    for (i = n - 1; i >= 0; i--)
    {
        for (j = 0; j <= n - 1; j++)
        {
            printf("%2d  ", abs(i - j));
        }
        printf("\n");
    }

    return (0);
}
