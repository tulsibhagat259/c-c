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
    struct Employee e;

    printf("\nEnter Employee Number: ");
    scanf("%d", &e.empno);
    printf("\nEnter Employee Name: ");
    scanf("%s", e.empname);
    printf("\nEnter Employee Address: ");
    scanf("%s", e.address);
    printf("\nEnter Employee Age: ");
    scanf("%d", &e.age);

    printf("\n--- Employee Information ---\n");
    printf("Employee Number : %d\n", e.empno);
    printf("Employee Name   : %s\n", e.empname);
    printf("Employee Address: %s\n", e.address);
    printf("Employee Age    : %d\n", e.age);

    return 0;
}
