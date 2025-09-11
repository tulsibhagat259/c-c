#include<stdio.h>
#include<conio.h>

int main() 
{
    int arr[5];
    int i;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("\nNumbers in Reverse Order:\n");
    for (i = 4; i >= 0; i--) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
