#include<stdio.h>
#include<string.h>
#include<conio.h>

struct Student
{
    int roll;
    char name[20];
    float marks;
};
union StudentU 
{
    int roll;
    char name[20];
    float marks;
};

int main() 
{
    struct Student s;
    union StudentU u;
    printf("=== Structure Example ===\n");
    s.roll = 101;
    strcpy(s.name, "Riya");
    s.marks = 89.5;

    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
    printf("\n=== Union Example ===\n");
    u.roll = 101;
    printf("Roll: %d\n", u.roll);

    strcpy(u.name, "Riya");
    printf("Name: %s\n", u.name);

    u.marks = 89.5;
    printf("Marks: %.2f\n", u.marks);
    printf("\nSize of Structure = %lu bytes\n", sizeof(s));
    printf("Size of Union     = %lu bytes\n", sizeof(u));

    return 0;
}
