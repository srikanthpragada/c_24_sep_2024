// Program to print unit matrix

#include <stdio.h>

void main()
{
 int i,j;


    for(i = 1;  i <= 5; i ++)
    {
        for(j = 1; j <= 5; j ++)
        {
           if(i == j)  // diagonal
               printf("1 ");
           else
               printf("0 ");
        }

        printf("\n");
    }


}