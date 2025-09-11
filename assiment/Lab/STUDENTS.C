#include<stdio.h>
#include<conio.h>

int main() 
{
    char names[5][50]; 
    int i;
    printf("Enter names of 5 students:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("Student %d: ", i + 1);
        scanf("%s", names[i]);  
    }

    printf("\n--- Student Names ---\n");
    for (i = 0; i < 5; i++) 
    {
        printf("%s\n", names[i]);
    }

    return 0;
}
