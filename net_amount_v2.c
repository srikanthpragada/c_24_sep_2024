// Program to display net amount with 15% discount

#include <stdio.h>

void main()
{
 int price,qty, amount, discount, net_amount, discounted_amount, tax;

    printf("Enter qty : ");
    scanf("%d",&qty);

    printf("Enter price : ");
    scanf("%d",&price);

    amount = qty * price;
    discount =  amount * 15 / 100;

    discounted_amount = amount - discount;
    tax = discounted_amount * 5 / 100;
    net_amount = discounted_amount + tax;


    printf("Amount         : %6d\n", amount);
    printf("- Discount     : %6d\n", discount);
    printf("After Discount : %6d\n", discounted_amount);
    printf("+ Tax          : %6d\n", tax);
    printf("Net Amount     : %6d\n", net_amount);

}
