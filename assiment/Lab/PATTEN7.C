#include<stdio.h>
#include<conio.h>

void main() 
{
    int n = 10;             
    int a[10][10];
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1, i;
    clrscr();
    while (top <= bottom && left <= right) 
    {

        for (i = left; i <= right; i++)
            a[top][i] = num++;
        top++;
        for (i = top; i <= bottom; i++)
            a[i][right] = num++;
        right--;
        for (i = right; i >= left; i--)
            a[bottom][i] = num++;
        bottom--;
        for (i = bottom; i >= top; i--)
            a[i][left] = num++;
        left++;
    }
    for (top = 0; top < n; top++) 
    {
        for (left = 0; left < n; left++) 
        {
            printf("%4d", a[top][left]);
        }
        printf("\n");
    }

    getch();
}
