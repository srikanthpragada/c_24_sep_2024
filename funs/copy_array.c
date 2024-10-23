// Create a function to copy one array to another

#include <string.h>


void copy(int a[], int b[])
{
   int i;

    for(i = 0; i < 5; i ++)
        a[i] = b[i];
}

void print(int a[])
{
 int i;

    for(i = 0; i < 5; i ++)
         printf("%5d", a[i]);
}

void zeroes(int a[])
{
 int i;

    for(i = 0; i < 5; i ++)
         a[i] = 0;
}


void main()
{
 int  a1[] = {1,2,3,4,5};
 int  a2[] = {10,20,30,40,50};

     copy(a2, a1);  // copy a1 to a2
     print(a2);
     zeroes(a1);
     print(a1);


}
