// Program to take a string and count upper and lower letters

#include <stdio.h>

void main()
{
  char st[50];
  int i, upper = 0, lower = 0;

     printf("Enter a string :");
     gets(st);


     for(i = 0; st[i] != '\0'; i ++)
     {
        if(isupper(st[i]))
             upper ++;
        else
             if(islower(st[i]))
                 lower ++;
     }


     printf("Upper = %d, Lower = %d", upper, lower);
}
