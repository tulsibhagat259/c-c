#include<stdio.h>
#include<conio.h>
int findMax(int arr[], int n);

int main() 
{
    int n, i;
    int arr[100];
    printf("\n Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Maximum number in array is: %d\n", findMax(arr, n));
    return 0;
}
int findMax(int arr[], int n) 
{
    int max = arr[0];
    int i;
    for (i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}

