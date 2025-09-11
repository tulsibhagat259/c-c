#include<stdio.h>
#include<conio.h>

void main() 
{
    float salary, premium;
    clrscr();

    printf("Enter your salary: ");
    scanf("%f", &salary);

    if (salary <= 10000)
    {
        premium = 0.05 * salary;
    }
    else if (salary <= 25000)
    {
        premium = 0.10 * salary;
    }
    else
    {
        premium = 0.15 * salary;
    }
    printf("Insurance Premium = %.2f\n", premium);

    getch();
}
