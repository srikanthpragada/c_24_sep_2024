// Create a function to compare two arrays

#include <stdio.h>
#include <string.h>


void replace(char st[20], char source, char target)
{
  int i;

     for(i = 0; st[i]  != '\0'; i ++)
     {
         if(st[i] == source)
             st[i] = target;
     }

}

void main()
{

  char st[] = "AbcAbc";

      replace(st,'b','D');
      puts(st);

}
