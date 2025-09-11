#include<stdio.h>
#include<conio.h>

void main() 
{
    int n, i;
    clrscr();
    printf("\n Enter a number to print its table: ");
    scanf("%d", &n);
    printf("\nMultiplication Table of %d:\n", n);
    for(i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    getch();
}
