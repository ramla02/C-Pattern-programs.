#include <stdio.h>

int main() 
{
    int n = 5;
    int i, j;
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d  ", i % 2);
        }
        printf("\n");
    }

    return (0);
}
