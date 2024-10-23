// Create a function to set both parameters to max of parameters

#include <string.h>


void  set_to_max(int * a, int * b)
{
    if(*a > *b)
        *b = *a;
    else
        *a = *b;
}

void main()
{
  int n1 = 10, n2 = 20;

      set_to_max(&n1, &n2);
      printf("%d %d", n1, n2);

}
