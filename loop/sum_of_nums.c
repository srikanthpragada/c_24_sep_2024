// Program to display sum of nums from 1 to n

#include <stdio.h>

void main()
{
 int n,i,total=0;

    printf("Enter a number :");
    scanf("%d", &n);

    for(i = 1; i <= n; i ++)
    {
        total += i;
    }

    printf("Total = %d", total);
}
