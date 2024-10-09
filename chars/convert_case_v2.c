// Program to accept a char and convert to opposite case

#include <stdio.h>

void main()
{
 char ch;

     printf("Enter char :");
     ch = getchar();

     if(isupper(ch))
         putch(tolower(ch));
     else
         putch(toupper(ch));
}
