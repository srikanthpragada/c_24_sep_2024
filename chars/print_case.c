// Program to accept a char and print the case

#include <stdio.h>

void main()
{
 char ch;

     printf("Enter Alphabet :");
     scanf("%c", &ch);

     if(ch >= 65 && ch <= 90)
        printf("Uppercase");
     else
        printf("Lowercase");


}
