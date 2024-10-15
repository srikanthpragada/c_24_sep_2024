// Program to print row total for each row in 5 X 5 array

#include <stdio.h>

void main()
{
 int arr[5][5];
 int i,j,total;

    srand(time(0));

    for(i = 0;  i < 5; i ++)
    {
       total = 0;
       for(j = 0; j < 5; j ++)
       {
           arr[i][j] = rand() % 25;
           printf("%5d", arr[i][j]);
           total += arr[i][j];
       }
       printf("%5d\n", total);
    }


}
