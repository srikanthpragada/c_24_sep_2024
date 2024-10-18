// Create a function to search for a number in an array

#include <stdio.h>
#include <string.h>


int search(int arr[10], int value)
{
  int i;

     for(i = 0; i < 10; i ++)
     {
         if (arr[i] == value)
             return i;
     }

     return -1; // search not found
}

void main()
{

 int a[] = {10,20,11,33,44,55,66,7,8,9};

     printf("Found at %d", search(a,56));
}
