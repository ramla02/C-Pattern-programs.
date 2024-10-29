#include <stdio.h>

int main() 
{
    int n = 5;
    int i, j;
    int x = 1, y = n * (n * 2) - (n - 1);
    int px, py;
    
    for (i = 1; i <= n; i++)
    {
        px = x;
        py = y;
        
        for (j = 1; j <= n; j++)
        {
            if (i <= n / 2 + 1)
            {
                printf("%2d ", px++);
            }
            else
            {
                printf("%2d ", py++);
            }
        }
        printf("\n");
        x = x + (n * 2);
        y = y - (n * 2);
    }

    return (0);
}
