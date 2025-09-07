#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;

    clrscr();   
    printf("Enter first angle of triangle: ");
    scanf("%d", &a);

    printf("Enter second angle of triangle: ");
    scanf("%d", &b);

    printf("Enter third angle of triangle: ");
    scanf("%d", &c);

    if (a > 0 && b > 0 && c > 0 && (a + b + c == 180))
    {
        printf("The triangle is valid.\n");
    }
    else
    {
        printf("The triangle is not valid.\n");
    }

    getch();   
}
