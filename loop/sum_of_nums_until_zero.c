// Program to take a number until 0 is given and then display sum

#include <stdio.h>

void main()
{
 int n, i, total = 0;

    while(1)  //  for(;;)
    {
       printf("Enter a number [0 to stop] :");
       scanf("%d",&n);

       if(n == 0)
          break;

       total += n;
    }


    printf("Total : %d", total);
}
