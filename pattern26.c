#include <stdio.h>

int main()
{
    char i, j;
    
    for (i = 'A'; i <= 'E'; i++)
    {
        for (j = 'A'; j <= 'E'; j++)
        {
            printf("%3c", i);
        }
        printf("\n");
    }
    return (0);
}