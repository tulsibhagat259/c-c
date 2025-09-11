#include<stdio.h>
#include<conio.h>

void main() 
{
    int n, i, j, sum = 0, term;
    clrscr();
    printf("\n Enter value of n: ");
    scanf("%d", &n);
    printf("Series: ");
    for (i = 1; i <= n; i++) 
    {
        term = 0;
        printf("(");
        for (j = 1; j <= i; j++) 
        {
            term += j;
            printf("%d", j);
            if (j < i) printf("+");
        }
        printf(")");
        if (i < n) printf(" + ");
        sum += term;
    }
    printf("\nSum of series = %d\n", sum);
    getch();
}
