// Program to display result of an exam

#include <stdio.h>

void main()
{
 int marks;

    printf("Enter marks : ");
    scanf("%d",&marks);

    if(marks >= 50)
        printf("Passed!\n");
    else
        printf("Failed!\n");

    printf("The End!");

}
