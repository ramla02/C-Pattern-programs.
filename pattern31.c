#include <stdio.h>

int main() 
{
    int n = 5;
    int i, j;
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%c  ", i + j + 65);
        }
        printf("\n");
    }

    return (0);
}
