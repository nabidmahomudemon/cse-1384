#include<stdio.h>
void main()
{
    float unit, bill, surcharge, total;
    printf("Enter electricity units consumed: ");
    scanf("%f",&unit);
    if (unit <= 50)
       bill = unit * 0.50;
    else if (unit <= 150)
       bill = 50 * 0.50 + (unit - 50) * 0.75;
    else if (unit <= 250)
       bill = 50 * 0.50 + 100 * 0.75 + (unit - 150) * 1.20;
    else
       bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit - 250) * 1.50;
    surcharge = (bill * 20)/100;
    total = bill + surcharge;
    printf("Bill amount       = Rs. %.2f\n", bill);
    printf("Surcharge (20%%)   = Rs. %.2f\n", surcharge);
    printf("Total Bill        = Rs. %.2f\n", total);
}

