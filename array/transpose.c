// Program to print transpose of the array

#include <stdio.h>

void main()
{
 int arr[5][5];
 int i,j,total;

    srand(time(0));

    for(i = 0;  i < 5; i ++)
    {
       for(j = 0; j < 5; j ++)
       {
           arr[i][j] = rand() % 25;
           printf("%5d", arr[i][j]);
       }
       printf("\n");
    }

    printf("\nTransposed Array\n");

    for(i = 0;  i < 5; i ++)
    {
       for(j = 0; j < 5; j ++)
       {
           printf("%5d", arr[j][i]);
       }
       printf("\n");
    }

}
