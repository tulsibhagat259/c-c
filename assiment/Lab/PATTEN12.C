#include<stdio.h>
#include<conio.h>

void main()
{
    double i, n,sum=0;
    n=10;
    clrscr();
    for(i=1;i<=n;i++)
    {
        if ((int)i%2==1)
            sum+=i/(i+1);
        else
            sum-=i/(i+1);
    }
    printf("Sum: %lf",sum);
    getch();
}