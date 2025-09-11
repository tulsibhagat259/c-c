#include<stdio.h>
#include<conio.h>
#include<string.h>

void reverseString(char str[], int index, int length) 
{
    if (index == length) 
    {
        return;
    }
    reverseString(str, index + 1, length);
    printf("%c", str[index]);
}

int main() 
{
    char str[100];
    printf("\n Enter a string: ");
    gets(str);  
    int length = strlen(str);
    printf("Reversed string: ");
    reverseString(str, 0, length);
    return 0;
}
