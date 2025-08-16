#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100];
	clrscr();
	int i, vowels =0,consonants=0;
	printf("\n Emter A string : ");
	gets(str);
	for (i=0;str[i] !='\0';i++)
	{
		char c=tolower(str[i]);
		if (c>='a' && c<='z')
		{
			if (c>='a' || c=='e' || c=='i' || c=='o' || c=='u')
				vowels++;

		else
			consonants++;


		}
	}
	printf("\n Vowels :%d",vowels);
	printf("\n Consonants :%d",consonants);
	getch();
}