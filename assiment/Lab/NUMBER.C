#include<stdio.h>
#include<conio.h>

void main() 
{
    int num;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) 
    {
        printf("%d is Positive.\n", num);
    } 
    else if (num < 0) {
        printf("%d is Negative.\n", num);
    } 
    else {
        printf("The number is Zero.\n");
    }
    getch();
}
