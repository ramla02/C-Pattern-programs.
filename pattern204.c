#include <stdio.h>

int main() 
{
    int i, j;
    
    for ( i = 0; i < 5; i++)
    {
        for (j = i; j < i + 5; j++)
        {
            printf("%d  ", (j % 5) + 1);
        }
        printf("\n");
    }

    return (0);
}
