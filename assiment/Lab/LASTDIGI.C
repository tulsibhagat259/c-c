#include<stdio.h>
#include<conio.h>

void main() 
{
    int num, firstDigit, lastDigit, sum;
    clrscr();
    printf("\n Enter a number: ");
    scanf("%d", &num);
    if(num < 0) 
    {
        num = -num;
    }
    lastDigit = num % 10;
    while(num >= 10) 
    {
        num = num / 10;
    }
    firstDigit = num;
    sum = -(firstDigit + lastDigit);
    printf("Summation of first and last digit = %d\n", sum);
    getch();
}

