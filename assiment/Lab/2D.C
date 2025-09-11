#include<stdio.h>
#include<conio.h>

int main() 
{
    int a[10][10], b[10][10], result[10][10];
    int i, j, k, r1, c1, r2, c2, choice;
    printf("\nEnter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c1; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nChoose operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1: 
            if (r1 == r2 && c1 == c2) 
            {
                printf("\nResult of Addition:\n");
                for (i = 0; i < r1; i++) 
                {
                    for (j = 0; j < c1; j++) 
                    {
                        result[i][j] = a[i][j] + b[i][j];
                        printf("%d ", result[i][j]);
                    }
                    printf("\n");
                }
            } else 
            {
                printf("Addition not possible! Matrices must have same dimensions.\n");
            }
            break;

        case 2: 
            if (r1 == r2 && c1 == c2) {
                printf("\nResult of Subtraction:\n");
                for (i = 0; i < r1; i++) 
                {
                    for (j = 0; j < c1; j++)
                    {
                        result[i][j] = a[i][j] - b[i][j];
                        printf("%d ", result[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Subtraction not possible! Matrices must have same dimensions.\n");
            }
            break;

        case 3: 
            if (c1 == r2) 
            {
                printf("\nResult of Multiplication:\n");
                for (i = 0; i < r1; i++) 
                {
                    for (j = 0; j < c2; j++) 
                    {
                        result[i][j] = 0;
                        for (k = 0; k < c1; k++) 
                        {
                            result[i][j] += a[i][k] * b[k][j];
                        }
                        printf("%d ", result[i][j]);
                    }
                    printf("\n");
                }
            } else 
            {
                printf("Multiplication not possible! Columns of first must equal rows of second.\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
