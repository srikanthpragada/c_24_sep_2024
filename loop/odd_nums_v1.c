// Program to display odd numbers from 1 to 50

#include <stdio.h>

void main()
{
 int n;

    for(n = 1; n <= 50; n ++)
    {
      if(n % 2 == 1)
        printf("%d ", n);
    }
}
