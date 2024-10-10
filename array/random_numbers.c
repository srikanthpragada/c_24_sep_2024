// Program to generate random numbers and fill array

#include <stdio.h>

void main()
{
 int arr[10];
 int i;

    srand(time(0));

    for(i = 0;  i < 10; i ++)
    {
       arr[i] = rand() % 100;
       printf("%d\n",arr[i]);
    }
}
