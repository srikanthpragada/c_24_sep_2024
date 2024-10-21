// Program to create a function to set parameters to 0

#include <stdio.h>
#include <string.h>

void zero(int n1, int n2)
{
    n1 = n2 = 0;
}

void main()
{
 int a = 100, b = 200;


    zero(a, b);  // pass by value
    printf("%d %d", a, b);
}
