#include <stdio.h>

int main() 
{
    char i, j;
    
    for (i = 'A'; i <= 'E'; i++)
    {
        for (j = 'A'; j <= 'E'; j++)
        {
            printf("%3c", j);
        }
        printf("\n");
    }

    return (0);
}
