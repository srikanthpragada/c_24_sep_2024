// Program to print a string in reverse vertically

#include <stdio.h>
#include <string.h>


void main()
{
  char name [] = "Ritchie";
  int i;


     for(i = strlen(name) - 1; i >= 0; i --)
        printf("%c\n", name[i]);



}
