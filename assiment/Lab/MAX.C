#include<stdio.h>
#include<conio.h>

void main() 
{
    int num, digit, max = 0;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num < 0) 
    {
        num = -num;
    }
    while(num > 0) 
    {
        digit = num % 10;   
        if(digit > max) {
            max = digit;
        }
        num = num / 10;     
    }
    printf("Maximum digit is: %d\n", max);
    getch();
}
