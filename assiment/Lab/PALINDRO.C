#include<stdio.h>
#include<conio.h>

int isPalindrome(int num) 
{
    int rev = 0, rem, original, i;
    original = num;

    for (i = num; i > 0; i = i / 10) 
    {
        rem = i % 10;
        rev = rev * 10 + rem;
    }

    if (original == rev)
        return 1;   
    else
        return 0;   
}

int main() 
{
    int number;

    printf("\nEnter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("%d is a Palindrome number.\n", number);
    else
        printf("%d is NOT a Palindrome number.\n", number);

    return 0;
}
