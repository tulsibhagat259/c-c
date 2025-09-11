#include<stdio.h>
#include<conio.h>

void sortArray(int arr[], int n, int order) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if ((order == 1 && arr[j] > arr[j + 1]) || 
                (order == 2 && arr[j] < arr[j + 1]))
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void displayArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int n1, n2, choice;

    printf("\nEnter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++) 
    {
        scanf("%d", &arr2[i]);
    }

    printf("\nHow do you want to sort?\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("\nEnter choice: ");
    scanf("%d", &choice);

    sortArray(arr1, n1, choice);
    sortArray(arr2, n2, choice);

    printf("\nSorted First Array: ");
    displayArray(arr1, n1);

    printf("\nSorted Second Array: ");
    displayArray(arr2, n2);

    return 0;
}
