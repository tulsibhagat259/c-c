#include <stdio.h>
#include <conio.h>

void main() 
{
    float expense[5], total = 0, average;
    int i;
    clrscr();   
    for(i = 0; i < 5; i++) 
    {
        printf("Enter expense %d: ", i+1);
        scanf("%f", &expense[i]);
        total += expense[i];
    }
    average = total / 5;
    printf("\nTotal Expense = %.2f", total);
    printf("\nAverage Expense = %.2f", average);

    getch(); 
}

