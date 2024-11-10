#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int i, j;
    
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d  ", abs(i - j));
        }
        printf("\n");
    }
    return (0);
}
