#include<stdio.h>
#include<conio.h>

int main() 
{
    int height;
    clrscr();
    printf("Enter height of the person (in cm): ");
    scanf("%d", &height);
    if (height < 150) 
    {
        printf("The person is Short.\n");
    }
    else if (height >= 150 && height < 165) {
        printf("The person has Average height.\n");
    }
    else if (height >= 165 && height < 185) {
        printf("The person is Tall.\n");
    }
    else {
        printf("The person is Very Tall.\n");
    }

    getch();
}
