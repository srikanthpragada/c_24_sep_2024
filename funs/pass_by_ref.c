// Program to create a function to set parameters to 0 using pass by reference

#include <stdio.h>
#include <string.h>

void zero(int * p1, int * p2)
{
    *p1 = 0;
    *p2 = 0;
}

void main()
{
 int a = 100, b = 200;


    zero(&a, &b);  // pass by address/reference
    printf("%d %d", a, b);
}
