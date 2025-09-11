#include<stdio.h>
#include<conio.h>

void main() 
{
    char str1[100], str2[100];
    int i, j;
    clrscr();
    printf("\n Enter the first string: ");
    gets(str1); 

    printf("\n Enter the second string: ");
    gets(str2);
    for(i = 0; str1[i] != '\0'; i++);
    for(j = 0; str2[j] != '\0'; j++) 
    {
        str1[i] = str2[j];
        i++;
    }
    str1[i] = '\0'; 

    printf("Combined string: %s\n", str1);
    getch();
}
