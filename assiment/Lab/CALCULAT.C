#include<stdio.h>
#include<conio.h>

void main() 
{
    int i = 1, num, sum = 0;
    clrscr();
    printf("\n Enter 10 numbers:\n");
    while(i <= 10) 
    {
        scanf("%d", &num);
        sum += num;   
        i++;
    }
    printf("Sum of 10 numbers = %d\n", sum);
    getch();
}
