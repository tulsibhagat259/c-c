#include <stdio.h>
#include <conio.h>

void main()
{
    int ascii;   
    clrscr();
    char ch;

    printf("Enter an ASCII value: ");
    scanf("%d", &ascii);

    ch = ascii;   

    printf("Character for ASCII %d is: %c", ascii, ch);

    getch();    
}
