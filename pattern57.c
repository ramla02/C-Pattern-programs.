/* Fibonacci Series */
#include <stdio.h>

int main() 
{
    int i, j;
    int n1 = 0, n2 = 1, r = n1 + n2;
    
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d  ", r);
            r = n1 + n2;
            n1 = n2;
            n2 = r;
        }
        printf("\n");
    }

    return (0);
}
