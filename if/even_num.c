// Program to display whether two numbers are even or only one or none

#include <stdio.h>

void main()
{
 int n1, n2;

    printf("Enter two numbers : ");
    scanf("%d%d",&n1,&n2);

    if(n1 % 2 == 0)
      if(n2 % 2 == 0)
         printf("Both are even");
      else
         printf("First is even");
    else
       if(n2 % 2 == 0)
         printf("Second is even");
       else
         printf("None");
}
