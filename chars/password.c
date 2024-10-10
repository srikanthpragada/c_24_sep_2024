// Program to accept 8 char and display whether it is a valid password

#include <stdio.h>

void main()
{
 char ch;
 int i, upper = 0, digit = 0;

     printf("Enter password :");

     for(i = 1; i <= 8; i ++)
     {
       ch = getch();
       putch('*');

       if(isupper(ch))
           upper = 1;
       else
          if(isdigit(ch))
             digit = 1;
     }

     if(upper && digit)
        printf("\nValid password!");
     else
       if(!upper)
           printf("\nUppercase is missing!");
       else
           printf("\nDigit is missing!");

}
