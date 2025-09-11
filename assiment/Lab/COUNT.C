#include<stdio.h>
#include<conio.h>

void  main() 
{
    char str[200];
    int i, words = 0;
    clrscr();
    printf("\n Enter a string: ");
    gets(str); 
    for(i = 0; str[i] != '\0'; i++) 
    {
        if((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') &&
           (i == 0 || str[i-1] == ' ' || str[i-1] == '\t' || str[i-1] == '\n')) 
        {
            words++;
        }
    }
    printf("Total number of words = %d\n", words);
    getch();
}
