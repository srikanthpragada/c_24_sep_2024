// Program to display net amount

#include <stdio.h>

void main()
{
 int price, qty, discount, amount;

    printf("Enter price : ");
    scanf("%d",&price);
    printf("Enter qty : ");
    scanf("%d",&qty);

    amount = qty * price;

    if(qty >= 3)
        discount = amount * 40 / 100;
    else
        if(qty >= 2)
           discount = amount * 20 / 100;
        else
           discount = amount * 10 / 100;


    amount = amount - discount;

    if (amount > 5000)
         amount = amount * .90;  // 10% discount


    printf("Net Amount  :%6d\n", amount);
}
