// Program to take a number and display whether it is prime or not

#include <stdio.h>

void main()
{
 int n, i, prime= 1;


    for(n = 101;  n < 200; n += 2)
    {
       prime = 1;
       for(i = 2; i <= n/2; i ++)
       {
         if(n % i == 0)
         {
           prime = 0;
           break;
         }
       } // inner loop

       if(prime)
          printf("%d ", n);
    } // outer loop
}
