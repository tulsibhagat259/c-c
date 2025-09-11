#include<stdio.h>
#include<conio.h>

struct Employee 
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() 
{
    struct Employee e[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);
        printf("\nEnter Employee Number: ");
        scanf("%d", &e[i].empno);
        printf("\nEnter Employee Name: ");
        scanf("%s", e[i].empname);
        printf("\nEnter Employee Address: ");
        scanf("%s", e[i].address);
        printf("\nEnter Employee Age: ");
        scanf("%d", &e[i].age);
    }
    printf("\n--- Employee Information ---\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee Number : %d\n", e[i].empno);
        printf("Employee Name   : %s\n", e[i].empname);
        printf("Employee Address: %s\n", e[i].address);
        printf("Employee Age    : %d\n", e[i].age);
    }

    return 0;
}
