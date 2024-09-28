// Program to display sum and product

#include <stdio.h>

void main()
{
  int a, b, sum, product;

    // input
    printf("Enter two numbers :");
    scanf("%d%d", &a, &b);

    // process
    sum  = a + b;
    product = a * b;

    // output
    printf("Sum = %d, Product = %d", sum, product);

}
