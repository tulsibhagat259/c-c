#include<stdio.h>
#include<conio.h>

void main() 
{
    char str[200];
    int i, count = 0;
    clrscr();
    printf("\n Enter a string: ");
    gets(str); 

    for(i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] == 'i' && str[i+1] == 's')
         {
            if(i == 0 || str[i-1] == ' ' || str[i-1] == '\t') 
            {
                if(str[i+2] == ' ' || str[i+2] == '\0' || str[i+2] == '.' || str[i+2] == ',' || str[i+2] == '\n') 
                {
                    count++;
                }
            }
        }
    }

    printf("The word 'is' appears %d times in the string.\n", count);
    getch();
}

