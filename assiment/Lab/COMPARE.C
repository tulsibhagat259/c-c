#include<stdio.h>
#include<conio.h>

void main() 
{
    char str1[100], str2[100];
    int i = 0, flag = 0;
    clrscr();
    printf("\n Enter first string: ");
    gets(str1);   
    printf("\n Enter second string: ");
    gets(str2);  
    while(str1[i] != '\0' && str2[i] != '\0') 
    {
        if(str1[i] != str2[i]) 
        {
            flag = 1;  
            break;
        }
        i++;
    }
    if(str1[i] != '\0' || str2[i] !='\0')
    {
        flag = 1;  
    }
    if(flag == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");
    getch();
}
