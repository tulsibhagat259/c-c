#include <stdio.h>
#include <conio.h>

void main() 
{
    char name[5][30];   
    float salary[5], total = 0, average;
    int i;
    clrscr(); 
    for(i = 0; i < 5; i++) 
    {
        printf("Enter name of employee %d: ", i+1);
        scanf("%s", name[i]);   
        printf("Enter salary of %s: ", name[i]);
        scanf("%f", &salary[i]);
        total += salary[i];
    }
    average = total /5;
    printf("\n--- Employee Salary Details ---\n");
    for(i = 0; i < 5; i++) {
        printf("%s : %.2f\n", name[i], salary[i]);
    }

    printf("\nTotal Salary = %.2f", total);
    printf("\nAverage Salary = %.2f", average);

    getch();   
}
