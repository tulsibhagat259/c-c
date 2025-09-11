#include<stdio.h>
#include<conio.h>

void main() 
{
    char str[100];
    int i, length = 0;
    clrscr();
    printf("\n Enter a string: ");
    gets(str);   
    for (i = 0; str[i] != '\0'; i++) 
    {
        length++;
    }
    printf("\nCharacters in reverse order:\n");
    for (i = length - 1; i >= 0; i--) 
    {
        printf("%c\n", str[i]);
    }
    getch();
}
