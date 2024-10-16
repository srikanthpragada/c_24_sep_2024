// Program to take names until end is given and display the largest

#include <stdio.h>
#include <string.h>

void main()
{
  char name[20], largest[20];
  int i;


     strcpy(largest,"");

     while(1)
     {
        printf("Enter a name [end to stop] :");
        gets(name);

        if(stricmp(name, "end") == 0)
             break;

        if( strcmp(name,largest) > 0)
            strcpy(largest, name);
     }


     printf("Largest name = %s", largest);
}
