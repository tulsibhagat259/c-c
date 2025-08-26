#include<stdio.h>
#include<conio.h>

void main()
{
	float base,height,area;
	printf("\nEnter Base of the Triangle : ");
	scanf("%f",&base);
	printf("\nEnter Height of the Triangle : ");
	scanf("%f",&height);
	area= (base * height) / 2;
	printf("\n Area of Triangle is %f",area);
	getch();
}

