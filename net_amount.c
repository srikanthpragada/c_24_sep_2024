// Program to display net amount with 15% discount

#include <stdio.h>

void main()
{
 int price,qty, amount, discount, net_amount;

    printf("Enter qty : ");
    scanf("%d",&qty);

    printf("Enter price : ");
    scanf("%d",&price);

    amount = qty * price;
    discount =  amount * 15 / 100;

    net_amount = amount - discount;

    printf("Amount     : %6d\n", amount);
    printf("- Discount : %6d\n", discount);
    printf("Net Amount : %6d\n", net_amount);
}
