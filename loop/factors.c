// Program to take a number and display factors

#include <stdio.h>

void main()
{
 int n, i;

    printf("Enter a number :");
    scanf("%d",&n);

    for(i = 2;  i <= n/2; i ++)
    {
       if(n % i == 0)
         printf("%d ",i);
    }

}
