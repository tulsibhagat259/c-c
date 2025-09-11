#include<stdio.h>
#include<conio.h>

void main() 
{
    char str[100], substr[100];
    int start, length, i;
    clrscr();
    printf("\n Enter the original string: ");
    gets(str);  
    printf("\nEnter starting position (0-based index): ");
    scanf("%d", &start);

    printf("Enter length of substring: ");
    scanf("%d", &length);
    for(i = 0; i < length && str[start + i] != '\0'; i++) 
    {
        substr[i] = str[start + i];
    }
    substr[i] = '\0'; 

    printf("Extracted substring: %s\n", substr);
    getch();
}
