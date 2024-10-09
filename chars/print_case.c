// Program to accept a char and print the case

#include <stdio.h>

void main()
{
 char ch;

     printf("Enter Alphabet :");
     ch = getchar();

     if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase");
     else
        printf("Lowercase");


}
