#include<stdio.h>
#include<conio.h>

void main()
{
	float a,b,c,perimeter;
	clrscr;
	printf("\n Enter side a : ");
	scanf("%f",&a);
	printf("\n Enter side b : ");
	scanf("%f",&b);
	printf("\n Enter side c : ");
	scanf("%f",&c);

	perimeter=a+b+c;
	printf("\n The circumference (perimeter) of the tringle=%f",perimeter);
	getch();
}






