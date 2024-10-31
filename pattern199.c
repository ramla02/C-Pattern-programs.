/* prime number pattern */
#include <stdio.h>

int main() 
{
    int n = 5;
    int i, j, k, r;
    int cn = 1, count;
    
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            for (k = cn + 1; k <= 10000; k++)
            {
                cn = k;
                count = 0;
                for (r = 1; r <= cn; r++)
                {
                    if (cn % r == 0)
                    count++;
                }
                if (count == 2)
                {
                    printf("%2d ", cn);
                    break;
                }
            }
        }
        printf("\n");
    }

    return (0);
}
