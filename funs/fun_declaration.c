// Function declaration or Prototype Declaration
#include<stdio.h>


// Function Declaration
float avg(int, int);

void main()
{
 float r;

      r = avg(10, 15);
      printf("%f ", r);
}

// Function definition
float avg(int a, int b)
{
  return (a + b) / 2.0;
}
