#include<stdio.h>
#include<conio.h>

void main() 
{
    int n, i, sum = 0;
    clrscr();
    printf("\n Enter value of n: ");
    scanf("%d", &n);

    printf("Series: ");
    for (i = 1; i <= n; i++) 
    {
        printf("%d", i);
        if (i < n) printf(" + ");
        sum += i;
    }
    printf("\nSum of series = %d\n", sum);
    getch();
}
