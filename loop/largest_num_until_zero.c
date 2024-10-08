// Program to take a number until 0 is given and then display the largest number

#include <stdio.h>

void main()
{
 int n, i, largest = 0;

    while(1)
    {
       printf("Enter a number [0 to stop] :");
       scanf("%d",&n);

       if(n == 0)
          break;

       if(n > largest)
          largest = n;
    }


    printf("Largest : %d", largest);
}
