// Program to take a number until 0 is given and then display positive and negative count

#include <stdio.h>

void main()
{
 int n, i, positives = 0, negatives = 0;


    while(1)
    {
       printf("Enter a number [0 to stop] :");
       scanf("%d",&n);

       if(n == 0)
          break;

       if (n >= 0)
            positives ++;
       else
            negatives ++;
    }


    printf("Positives : %d, Negatives : %d", positives, negatives);
}
