// Create a function to compare two arrays

#include <stdio.h>
#include <string.h>


int compare(int a1[5], int a2[5])
{
  int i;

     for(i = 0; i < 5; i ++)
     {
         if (a1[i] != a2[i])
             return 0;
     }

     return 1; // all elements are equal
}

void main()
{

 int a[] = {10,20,11,33,44};
 int b[] = {10,22,11,33,44};

     printf("Result =  %d", compare(a,b));
}
