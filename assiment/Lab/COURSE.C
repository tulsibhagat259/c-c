#include <stdio.h>
#include <conio.h>

void main()
{
    int phy, chem, math, total, total_mp;

    clrscr();  
    printf("Input the marks obtained in Physics : ");
    scanf("%d", &phy);

    printf("Input the marks obtained in Chemistry : ");
    scanf("%d", &chem);

    printf("Input the marks obtained in Mathematics : ");
    scanf("%d", &math);

    total = phy + chem + math;
    total_mp = phy + math;

    printf("Total marks of Maths, Physics and Chemistry : %d\n", total);
    printf("Total marks of Maths and Physics : %d\n", total_mp);

    if ((math >= 65 && phy >= 55 && chem >= 50 && total >= 190) || (total_mp >= 140))
    {
        printf("The candidate is eligible.\n");
    }
    else
    {
        printf("The candidate is not eligible.\n");
    }

    getch();   
}
