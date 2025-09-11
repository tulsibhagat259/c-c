#include <stdio.h>
#include <conio.h>

void main() 
{
    float km, m;

    clrscr();   

    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    m = km * 1000;

    printf("\n%.2f kilometer(s) = %.2f meters", km, m);

    getch();
}
