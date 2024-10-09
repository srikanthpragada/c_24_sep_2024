// Program to accept 10 chars and print no. of uppercase letters

#include <stdio.h>

void main()
{
 char ch;
 int i, count = 0;

     printf("Enter 10 chars :");
     for(i = 1; i <= 10; i ++)
     {
       ch = getch();
       putch('*');

       if(ch >= 'A' && ch <= 'Z')
          count ++;
     }

     printf("\nCount = %d", count);
}
