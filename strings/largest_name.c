// Program to take 5 names and display the largest

#include <stdio.h>

void main()
{
  char name[20], largest[20];
  int i;


     strcpy(largest,"");

     for(i = 1; i <= 5; i ++)
     {
        printf("Enter a name :");
        gets(name);

        if( strcmp(name,largest) > 0)
            strcpy(largest, name);
     }


     printf("Largest name = %s", largest);
}
