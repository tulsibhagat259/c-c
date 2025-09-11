#include<stdio.h>
#include<conio.h>

void main()
{
    int marks;
    clrscr();
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks >= 40) 
    {
        printf("Result: Pass\n");
    } else {
        printf("Result: Fail\n");
    }

    getch();
}
