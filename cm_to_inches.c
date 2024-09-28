// Program to take cm and display inches

#include <stdio.h>

void main()
{
 float cm,inches;

    printf("Enter cm :");
    scanf("%f", &cm);

    inches = cm / 2.54;

    printf("Inches = %6.2f for CM = %6.2f", inches, cm);

}
