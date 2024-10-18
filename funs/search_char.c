// Create a function to search for a number in an array

#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}


int search(char st[20], char value)
{
  int i;

     for(i = 0; st[i] != '\0'; i ++)
     {
         if (st[i] == value)
             return i;
     }

     return -1; // search not found
}

void main()
{
     printf("Found at %d", search("programming", 'm'));
}
