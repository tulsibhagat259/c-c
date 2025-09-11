#include<stdio.h>
#include<conio.h>

void main() 
{
    char str[100];
    int i;
    clrscr();
    printf("\n Enter a string: ");
    gets(str); 
    printf("\nIndividual characters are:\n");
    for (i = 0; str[i] != '\0'; i++) 
    {
        printf("%c\n", str[i]);
    }
    getch();
}
