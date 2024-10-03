// Program to display wage based on weekday and hours

#include <stdio.h>

void main()
{
 int weekday, hours, rate, wage, bonus = 0;

    printf("Enter a weekday[1-7] and hours worked : ");
    scanf("%d%d",&weekday, &hours);

    if(weekday <= 5)
    {
       rate = 100;
    }
    else
        if(weekday == 6)
          rate = 150;
        else
          rate = 200;


    wage = hours * rate;

    if (hours > 8)
        bonus = wage * .20;


    wage += bonus;    // wage = wage + bonus;

    printf("Wage = %d", wage);
}
