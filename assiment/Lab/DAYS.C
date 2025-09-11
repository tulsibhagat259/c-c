#include <stdio.h>
#include <conio.h>

void main() 
{
    int days, months, remaining_days;
    clrscr();  

    printf("Enter number of days: ");
    scanf("%d", &days);

    months = days / 30;            
    remaining_days = days % 30;      

    printf("\n%d days = %d month(s) and %d day(s)", days, months, remaining_days);

    getch();   
}
