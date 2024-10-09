// Program to accept a char and convert to opposite case

#include <stdio.h>

void main()
{
 char ch;

     printf("Enter char :");
     ch = getchar();

     if(ch >= 65 && ch <= 90)
         putch(ch + 32);
     else
       if(ch >= 97 && ch <= 122)
            putch(ch - 32);
       else
            putch(ch);
}
