// Program to take name and print only uppercase letters

#include <stdio.h>

void main()
{
  char name[20];
  int i;

     printf("Enter name :");
     gets(name);


     for(i = 0; name[i] != '\0'; i ++)
     {
        if(isupper(name[i]))
            putch(name[i]);
     }

}
