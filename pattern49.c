#include <stdio.h>

int main() 
{
   int n = 5;
   int i, j;
   int x = 1, y = n;
   int t1, t2;
   int r1, r2;
   
   for (i = n; i >= 1; i--)
   {
       t1 = x;
       t2 = y;
       r1 = i;
       r2 = i + 1;
       
       for (j = n; j >= i; j--)
       {
           if ((i + j) % 2 == 0)
           {
               printf("%2d ", t1);
           }
           else
           {
               printf("%2d ", t2);
           }
           t1 = t1 - r1++;
           t2 = t2 - r2++;
       }
       y = y + i - 1;
       x = x + i;
       printf("\n");
   }

    return (0);
}
