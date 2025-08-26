
#include<stdio.h>
#include<conio.h>

void main()
{
	float length,breadth,area;
	printf("\n Enter the Length of the Rectangle : ");
	scanf("%f",&length);
	printf("\n Enter the Breadth of the Rectangle : ");
	scanf("%f",&breadth);
	area=length*breadth;
	printf("\n The area of the Rectangle is : %f",area);
	getch();
}
