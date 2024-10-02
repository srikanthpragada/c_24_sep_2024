// Program to display grade based on marks

#include <stdio.h>

void main()
{
 int marks;

    printf("Enter marks : ");
    scanf("%d",&marks);

    // Multiple if statement

    if(marks > 80)
        printf("A");
    else
        if(marks > 60)
            printf("B");
        else
            printf("C");
}
