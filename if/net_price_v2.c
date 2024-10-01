// Program to display net price after a discount of either 10% or 20%

#include <stdio.h>

void main()
{
 int price, discount, net_price;

    printf("Enter price : ");
    scanf("%d",&price);

    if(price > 1000)
        discount = price * 0.20;
    else
        discount = price * 0.10;


    net_price = price - discount;

    printf("Price      :%6d\n", price);
    printf("- Discount :%6d\n", discount);
    printf("Net price  :%6d\n", net_price);
}
