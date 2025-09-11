#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    clrscr();
    printf("\n Enter A : ");
    scanf("%d",&a);
    printf("\n Enter B : ");
    scanf("%d",&b);
    printf("\n Enter C : ");
    scanf("%d",&c);
    
    if(a<b)
    {
            if(a<c)
            {
                    printf("\nA is mini Number");
            }
            else
            {
                printf("\nC is Mini Number");
            }
    }
    else if(b<c)
    {
        printf("\nB is Mini Number");
    }
    else
    {
        printf("\nC is Mini Number");
    }
    getch();
}