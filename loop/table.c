// Program to take a number and display table

#include <stdio.h>

void main()
{
 int n, i;

    printf("Enter a number :");
    scanf("%d",&n);

    for(i = 1;  i <= 10; i ++)
    {
       printf("%3d * %2d = %6d\n", n, i, n * i);
    }


}
