#include <stdio.h>
#include <conio.h>

void main() 
{
    int minutes, seconds;
    float hours;
    clrscr();   

    printf("Enter time in minutes: ");
    scanf("%d", &minutes);

    seconds = minutes * 60;
    hours = minutes / 60.0;

    printf("\n%d minute(s) = %d seconds", minutes, seconds);
    printf("\n%d minute(s) = %.2f hours", minutes, hours);

    getch();   
}
