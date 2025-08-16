#include<stdio.h>
#include<conio.h>

int factorial(int.n)
{
	if(n==0)
	return 1;
	return n*factorial(n-1);
}
int main()
{
	int num=5;
	clrscr;
	printf("\n Factorial of %d is %d",num,factorial(num));
	return 0;
}
