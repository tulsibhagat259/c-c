#include<stdio.h>
#include<conio.h>

void main() 
{
    char str[200];
    int i;
    int alphabets = 0, digits = 0, special = 0;
    clrscr();
    printf("\n Enter a string: ");
    gets(str); 
    for(i = 0; str[i] != '\0'; i++) 
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) 
        {
            alphabets++;
        }
        else if(str[i] >= '0' && str[i] <= '9') 
        {
            digits++;
        }
        else 
        {
            special++;
        }
    }

    printf("\nTotal alphabets = %d\n", alphabets);
    printf("Total digits = %d\n", digits);
    printf("Total special characters = %d\n", special);
    getch();
}
