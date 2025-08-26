#include<stdio.h>
#include<conio.h>

void main()
{
	float length,width,perimeter;
	clrscr();
	printf("\n Enter the length of the rectangle : ");
	scanf("%f",length);
	printf("\n Enter the width of the rectangle : ");
	scanf("%f",width);
	perimeter=2 * (length + width);
	printf("\n The perimeter of the rectangle is : %2f",perimeter);
	getch();
}