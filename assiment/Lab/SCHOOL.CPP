#include <iostream.h>
#include <conio.h>
#include <string.h>

void main()
{
    clrscr();
    char school[100];
    cout << "\n Enter school name: ";
    cin.getline(school, 100);

    cout << "\n Abbreviation: ";
    for (int i = 0; school[i] != '\0'; i++)
    {
        if (i == 0 || school[i - 1] == ' ')  
        {
            if (school[i] >= 'a' && school[i] <= 'z')
                cout << (char)(school[i] - 32); 
            else
                cout << school[i];
        }
    }

    getch();
}
