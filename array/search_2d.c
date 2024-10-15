// Program to search in 2d array

#include <stdio.h>

void main()
{
 int arr[5][5];
 int i,j,num, found = 0;

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

    printf("Enter a number :");
    scanf("%d",&num);


     for(i = 0;  i < 5; i ++)
     {
       for(j = 0; j < 5; j ++)
       {
           if(num == arr[i][j])
           {
               printf("Found at %d,%d\n", i, j);
               found = 1;
               break;
           }
       }

       // Terminate outer loop if number is found
       if(found)
          break;
    }



}
