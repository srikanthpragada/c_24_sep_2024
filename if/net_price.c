// Program to display net price after a discount of either 10% or 20%

#include <stdio.h>

void main()
{
 int price, net_price;

    printf("Enter price : ");
    scanf("%d",&price);

    if(price > 1000)
        net_price = price * 0.80;
    else
        net_price = price * 0.90;


    printf("Net price : %d", net_price);
}
