/* Binary number pattern */
#include <stdio.h>

long toBinary(int n);

int main() 
{
    int n = 3, x = 1;
    int i, j;
    
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j<= n; j++)
        {
            printf("%4ld ", toBinary(x));
            x++;
        }
        printf("\n");
    }
    return (0);
}

long toBinary(int n)
{
    long bin = 0;
    int rem, i = 1, step = 1;
    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return (bin);
}
