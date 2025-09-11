#include <stdio.h>
#include <conio.h>

void main() 
{
    int choice;
    float years, days;
    clrscr();   

    printf("Menu:\n");
    printf("1. Convert Years into Days\n");
    printf("2. Convert Days into Years\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1) 
    {
        printf("\nEnter years: ");
        scanf("%f", &years);
        days = years * 365;
        printf("%.2f year(s) = %.2f days", years, days);
    }
    else if(choice == 2)
    {
        printf("\nEnter days: ");
        scanf("%f", &days);
        years = days / 365;
        printf("%.2f day(s) = %.2f years", days, years);
    }
    else {
        printf("\nInvalid choice!");
    }

    getch();   
}
