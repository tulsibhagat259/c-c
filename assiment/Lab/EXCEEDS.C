#include <stdio.h>
#include <conio.h>

void main()
{
    int cust_id, unit;
    char name[30];
    float charge, total_amt, surcharge;

    clrscr();   
    printf("\n Enter Customer ID : ");
    scanf("%d", &cust_id);

    printf("\n Enter Customer Name : ");
    scanf("%s", name);

    printf("\n Enter Units Consumed : ");
    scanf("%d", &unit);
    if (unit < 350)
        charge = unit * 1.20;
    else if (unit >= 350 && unit < 600)
        charge = unit * 1.50;
    else if (unit >= 600 && unit < 800)
        charge = unit * 1.80;
    else
        charge = unit * 2.00;

    total_amt = charge;
    if (total_amt > 800)
    {
        surcharge = total_amt * 0.18;
        total_amt = total_amt + surcharge;
    }
    if (total_amt < 256)
        total_amt = 256;

    printf("\n----- Electricity Bill -----\n");
    printf("Customer ID      : %d\n", cust_id);
    printf("Customer Name    : %s\n", name);
    printf("Units Consumed   : %d\n", unit);
    printf("Total Amount Due : Rs. %.2f\n", total_amt);

    getch();   
}
