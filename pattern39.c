#include <stdio.h>

int main() 
{
    int n = 5;
    int i, j;
    
    for (i = n; i >= 1; i--)
    {
        for (j = i; j <= n; j++)
        {
            printf("%3d", j);
        }
        printf("\n");
    }

    return (0);
}
