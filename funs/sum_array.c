// Program to create a function to return sum of array

#include <stdio.h>
#include <string.h>


int sum(int a[10])
{
 int i, total = 0;

    for(i = 0; i < 10; i ++)
    {
        total += a[i];
    }

    return total;
}

void main()
{
  int arr[] = {1,4,5,6,7,8,9,10,22,1};

    printf("Total = %d", sum(arr));

}
