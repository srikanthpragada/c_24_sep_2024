// Create a function to print a table

#include <stdio.h>
#include <string.h>


void table(int num, int length)
{
  int i;

     for(i = 1; i <= length; i ++)
         printf("%5d * %2d = %5d\n", num, i, num * i);

}

void main()
{

    table(25, 10);

}
