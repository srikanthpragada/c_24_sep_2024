// Program to create a function that returns 1 if number is prime otherwise 0

#include <stdio.h>
#include <string.h>


int isprime(int n)
{
  int i;

      for(i = 2; i <= n/2; i ++)
      {
          if (n % i == 0)
               return 0;
      }

      return 1;
}

void main()
{
 int n;


     for(n = 3; n < 50; n += 2)
     {
         if (isprime(n))
              printf("%d ", n);
     }


}
