#include <stdio.h>
#include <conio.h>

void main()
{
    int units;
    float amt, total_amt, surcharge;

    clrscr();   
    printf("\n Enter total units consumed: ");
    scanf("%d", &units);
    if (units <= 50)
    {
        amt = units * 0.50;
    }
    else if (units <= 150)
    {
        amt = (50 * 0.50) + (units - 50) * 0.75;
    }
    else if (units <= 250)
    {
        amt = (50 * 0.50) + (100 * 0.75) + (units - 150) * 1.20;
    }
    else
    {
        amt = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + (units - 250) * 1.50;
    }
    surcharge = amt * 0.20;
    total_amt = amt + surcharge;
    printf("\n----- Electricity Bill -----\n");
    printf("Units Consumed   : %d\n", units);
    printf("Amount Charges   : Rs. %.2f\n", amt);
    printf("Surcharge (20%%) : Rs. %.2f\n", surcharge);
    printf("Total Amount     : Rs. %.2f\n", total_amt);

    getch();   
}
