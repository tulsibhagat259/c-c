#include <stdio.h>
#include <conio.h>

void main() {
    clrscr();   // clear screen

    int a, C;   // side and circumference

    printf("Enter side of the square: ");
    scanf("%d", &a);

    C = 4 * a;  // formula

    printf("Circumference of square = %d", C);

    getch();    // hold output
}
