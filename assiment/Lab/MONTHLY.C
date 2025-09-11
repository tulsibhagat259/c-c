#include <stdio.h>
#include <conio.h>

void main() 
{
    float salary, insurance, loan, remaining;
    clrscr();   

    printf("\n Enter Monthly Salary: ");
    scanf("%f", &salary);

    insurance = 0.10 * salary;   
    loan = 0.10 * salary;        
    remaining = salary - (insurance + loan);

    printf("\nMonthly Salary = %.2f", salary);
    printf("\nInsurance Deduction (10%%) = %.2f", insurance);
    printf("\nLoan Deduction (10%%) = %.2f", loan);
    printf("\nRemaining Salary = %.2f", remaining);

    getch();  
}
