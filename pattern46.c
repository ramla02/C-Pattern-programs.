#include <stdio.h>

int main() 
{
    int n = 5, x = 2;
    int i, j;
    
    for (i = n; i >= 1; i--)
    {
        for (j = n; j >= i; j--)
        {
            printf("%2d ", x);
            x += 2;
        }
        printf("\n");
    }

    return (0);
}