#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j;
    clrscr();
    for(i=1;i<=5;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
        for(i=1;i<=5;i++)
    {
        for(j=i;j<5;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}