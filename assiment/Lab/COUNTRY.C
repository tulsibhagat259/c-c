#include <stdio.h>
#include <string.h>

int main() 
{
    char country[100];
    int i;

    printf("Enter country name: ");
    gets(country);  

    printf("Abbreviated form: ");

    if (country[0] != ' ')
        printf("%c", toupper(country[0]));

    for (i = 1; i < strlen(country); i++) 
    {
        if (country[i] == ' ' && country[i+1] != ' ' && country[i+1] != '\0') 
        {
            printf("%c", toupper(country[i+1]));
        }
    }

    return 0;
}
