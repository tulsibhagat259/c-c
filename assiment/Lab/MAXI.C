#include<stdio.h>
#include<conio.h>

void main() 
{
    char str[200];
    int i, length = 0;
    clrscr();
    printf("\n Enter a string: ");
    gets(str);  
    for(i = 0; str[i] != '\0'; i++) 
    {
        length++;
    }

    printf("The total number of characters in the string = %d\n", length);
    getch();
}
