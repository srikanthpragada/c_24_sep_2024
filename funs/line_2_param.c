// Program to create a function to print a line of given size and given char

#include <stdio.h>
#include <string.h>


void line(int len, char ch)
{
  int i;

     for(i = 1; i <=  len; i ++)
         putch(ch);

}

void main()
{

   line(30, '*');
   printf("\nSrikanth Technologies\n");
   line(50, '=');

}
