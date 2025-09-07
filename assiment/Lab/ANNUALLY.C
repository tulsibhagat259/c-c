#include <stdio.h>
#include <conio.h>

void main() 
{
    float P, R, T, Amount, CI;
    clrscr();   

    printf("Enter Principal Amount: ");
    scanf("%f", &P);

    printf("Enter Rate of Interest: ");
    scanf("%f", &R);

    printf("Enter Time (in years): ");
    scanf("%f", &T);

    Amount = P * pow((1 + R / 100), T);

    CI = Amount - P;

    printf("\nAmount = %.2f", Amount);
    printf("\nCompound Interest = %.2f", CI);

    getch(); 
}
