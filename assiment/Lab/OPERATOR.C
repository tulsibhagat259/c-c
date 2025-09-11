#include <stdio.h>
#include <conio.h>

void main() 
{
    int num;
    clrscr();   
    printf("\n Enter a number: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("%d is Even.\n", num) : printf("%d is Odd.\n", num);

    getch();    
}
