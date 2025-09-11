#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;

    clrscr();   
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        printf("The largest number is: %d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("The largest number is: %d", b);
    }
    els
    {
        printf("The largest number is: %d", c);
    }
    getch();   
}
