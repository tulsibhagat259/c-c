#include<stdio.h>
#include<conio.h>

int main() 
{
    int num1, num2;
    printf("\n Enter first integer: ");
    scanf("%d", &num1);

    printf("\n Enter second integer: ");
    scanf("%d", &num2);
    if (num1 == num2) 
    {
        printf("Both numbers are equal.\n");
    } else 
    {
        printf("Numbers are not equal.\n");
    }

    return 0;
}
