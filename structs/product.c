// Create a structure to store details of a product

#include <string.h>

struct product
{
    // Members
    char name[20];
    int price, qoh;
};



void main()
{
    struct product p1, p2;
    struct product p3 = {"Samsung Fold", 120000, 5};


      strcpy(p1.name,"iPhone 16");
      p1.price = 100000;
      p1.qoh = 10;

      printf("%s - %d - %d", p1.name, p1.price, p1.qoh);

      p2 = p1;

}
