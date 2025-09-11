#include<stdio.h>
#include<conio.h>

void main() 
{
    int n, i = 1, sum = 0;
    clrscr();
    printf("\n Enter a positive number: ");
    scanf("%d", &n);
    while(i <= n) {
        sum += i;   
        i++;
    }
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    clrscr();
}
