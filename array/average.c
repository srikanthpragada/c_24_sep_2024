// Program to generate random numbers and fill array and then display average

#include <stdio.h>

void main()
{
 int arr[10];
 int i, total = 0;

    srand(time(0));

    for(i = 0;  i < 10; i ++)
    {
       arr[i] = rand() % 100;
       printf("%5d",arr[i]);
       total += arr[i];
    }

    printf("\nAverage = %d", total / 10);
}
