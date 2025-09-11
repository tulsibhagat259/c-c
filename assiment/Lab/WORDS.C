#include<stdio.h>
#include<conio.h>

void main() 
{
    char str[200];
    int i, wordStart = 0, wordLength = 0;
    int maxLen = 0, minLen = 1000;
    int maxStart = 0, minStart = 0;
    clrscr();
    printf("\n Enter a string: ");
    gets(str); 

    for(i = 0; ; i++) 
    {
        if(str[i] != ' ' && str[i] != '\0') 
        {
            wordLength++; 
        } else {
            if(wordLength > 0) 
            {
                if(wordLength > maxLen) 
                {
                    maxLen = wordLength;
                    maxStart = wordStart;
                }
                if(wordLength < minLen) 
                {
                    minLen = wordLength;
                    minStart = wordStart;
                }
            }
            wordLength = 0;
            wordStart = i + 1;
        }

        if(str[i] == '\0') 
        {
            break;
        }
    }
    printf("\n Largest word: ");
    for(i = 0; i < maxLen; i++) 
    {
        printf("%c", str[maxStart + i]);
    }
    printf("\n");
    printf("Smallest word: ");
    for(i = 0; i < minLen; i++) 
    {
        printf("%c", str[minStart + i]);
    }
    printf("\n");
    getch();
}
