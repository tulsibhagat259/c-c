#include <stdio.h>
#include <conio.h>

void main() 
{
    int years, months, days;
    clrscr();   

    printf("Enter number of years: ");
    scanf("%d", &years);

    months = years * 12;
    days = years * 365;

    printf("\n%d year(s) = %d months", years, months);
    printf("\n%d year(s) = %d days", years, days);

    getch();   
}
