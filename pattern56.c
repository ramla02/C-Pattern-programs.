#include <stdio.h>

int main() 
{
    int n = 5;
    int i, j, k;
    
    for (i = 1; i <= n; i++)
    {
        k = i;
        
        for (j = 1; j <= i; j++)
        {
            printf("%2d ", k);
            k = k + (n - j);
        }
        printf("\n");
    }

    return (0);
}
