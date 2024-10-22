
#include <stdio.h>
#include <string.h>

void fill(int * a, int len, int value)
{
 int i;

    for(i = 0; i < len; i ++)
         a[i] = value;
}

void print(int a[], int len)
{
 int i;

     for(i = 0; i < len; i ++)
        printf("%d ", a[i]);
}

void main()
{
  int a[] = {10,20,3,4,5};
  int b[] = {1,2,3,4,5,6,7,8,9,10};



      print(a, 5);

      fill(a, 5, 10);

      print(a, 5);

}
