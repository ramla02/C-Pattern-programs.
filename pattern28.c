#include <stdio.h>

int main() 
{
    char i, j;
    
    for (i = 'E'; i >= 'A'; i--)
    {
        for (j = 'E'; j >= 'A'; j--)
        {
            printf("%3c", i);
        }
        printf("\n");
    }

    return (0);
}
