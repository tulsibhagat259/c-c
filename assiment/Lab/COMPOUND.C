#include<stdio.h>
#include<conio.h>

void main() {
    float principal, rate, time, amount, ci;
    clrscr();   

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate / 100), time);
    ci = amount - principal;

    printf("Compound Interest = %.2f\n", ci);
    printf("Total Amount = %.2f\n", amount);

    getch();   
}
