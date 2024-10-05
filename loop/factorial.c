// Program to take a number and display factorial

#include <stdio.h>

void main()
{
 int n, i, fact = 1;

    printf("Enter a number :");
    scanf("%d",&n);

    for(i = 2;  i <= n; i ++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);
}
