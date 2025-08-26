#include <stdio.h>
#include <conio.h>

void main() 
{
    char ch;
    int ascii;
    clrscr();
    printf("\n Enter a character: ");
    scanf("%c", &ch);

    ascii = ch;

    printf("\n ASCII value of %c is: %d", ch, ascii);

    getch();
}