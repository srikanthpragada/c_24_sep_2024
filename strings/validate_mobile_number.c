// Program to validate mobile number

#include <stdio.h>
#include <string.h>


void main()
{
  char st [] = "858858A8553";
  int i, count;


     if(strlen(st) != 10)
       printf("Invalid Mobile Number!");
     else
     {
         count = 0;
         for(i = 0; i < 10;  i++)
         {
             if(isdigit(st[i]))
                 count ++;
         }

         if(count == 10)
             printf("Valid Mobile Number!");
         else
             printf("Invalid Mobile Number!");

     }

}
