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
    printf("\n--- Even or Odd Check ---\n");
    for (i = 0; i < 5; i++) 
    {
        if (arr[i] % 2 == 0)
            printf("%d is Even\n", arr[i]);
        else
            printf("%d is Odd\n", arr[i]);
    }

    return 0;
}
