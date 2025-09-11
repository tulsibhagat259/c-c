#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, temp;
    clrscr();   

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping using 3rd variable:");
    printf("\nFirst number = %d", a);
    printf("\nSecond number = %d", b);
    printf("\n\nEnter two numbers again: ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping without using 3rd variable:");
    printf("\nFirst number = %d", a);
    printf("\nSecond number = %d", b);

    getch();   
}
