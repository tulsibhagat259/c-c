#include<stdio.h>
#include<conio.h>

void main() 
{
    int n, i = 1;
    clrscr();
    printf("\n Enter a number: ");
    scanf("%d", &n);
    printf("\nMultiplication Table of %d:\n", n);
    while(i <= 10) 
    {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }
    getch();
}
