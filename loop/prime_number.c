// Program to take a number and display whether it is prime or not

#include <stdio.h>

void main()
{
 int n, i, prime = 1;

    printf("Enter a number :");
    scanf("%d",&n);

    for(i = 2;  i <= n/2; i ++)
    {
       if(n % i == 0)
       {
           prime = 0;
           break;
       }
    }


    if(prime == 1)
        printf("Prime Number!");
    else
        printf("Not a prime number!");

}
