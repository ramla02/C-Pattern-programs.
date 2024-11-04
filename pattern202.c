/* Hexa number pattern */
#include <stdio.h>

int main() 
{
   int n = 4, x = 1;
   int i, j;
   
   for (i = 1; i <= n; i++)
   {
       for (j = 1; j <= n; j++)
       {
           printf("%x  ", x);
           x++;
       }
       printf("\n");
   }

    return (0);
}
