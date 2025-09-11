#include <stdio.h>
#include <conio.h>

void main()
{
    int cust_id, unit;
    char name[30];
    float charge, total_amt;

    clrscr();   
    printf("Enter Customer ID : ");
    scanf("%d", &cust_id);

    printf("Enter Customer Name : ");
    scanf("%s", name);

    printf("Enter Units Consumed : ");
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

    printf("\n----- Electricity Bill -----\n");
    printf("Customer ID      : %d\n", cust_id);
    printf("Customer Name    : %s\n", name);
    printf("Units Consumed   : %d\n", unit);
    printf("Total Amount Due : Rs. %.2f\n", total_amt);

    getch();   
}
