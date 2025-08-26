#include <iostream.h>
#include <conio.h>

void main() 
{
    clrscr();  
    float salary, premium;
    float rate;
    cout << "Enter your annual salary: ₹";
    cin >> salary;
    if (salary < 200000)
        rate = 0.02;  
    else if (salary < 500000)
        rate = 0.03;  
    else if (salary < 1000000)
        rate = 0.04;  
    else
        rate = 0.05; 

    premium = salary * rate;

    cout << "\nYour insurance premium is: ₹" << premium;
    getch();  
}