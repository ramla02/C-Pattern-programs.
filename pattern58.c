/* Fibonacci Pyraamid */
#include <stdio.h>

int main() 
{
    int firstNum = 0, secondNum = 1, result = 0;
    int n = 5;
    int i, j;
    
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            firstNum = secondNum;
            secondNum = result;
            printf("%d  ", result);
            result = firstNum + secondNum;
        }
        firstNum = 0;
        secondNum = 1;
        result = 0;
        printf("\n");
    }

    return (0);
}
