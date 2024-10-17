// Program to create a function to print a line of given size

#include <stdio.h>
#include <string.h>


void line(int len)
{
  int i;

     for(i = 1; i <=  len; i ++)
         putch('-');

}

void main()
{

   line(30);
   printf("\nSrikanth Technologies\n");
   line(50);

}
