#include<iostream>

int main()
{
    int income;
    double tax;

    std::cout << "Enter your income: ";
    std::cin >> income;
    if (income <= 5000)
        tax = 0;
    else if (income <= 15000)
        tax = (income-5000)*0.1;
    else if (income <= 35000)
        tax = 10000*0.1 + (income - 15000)*0.2;
    else
        tax = 10000*0.1 + 20000*0.15 + (income - 35000)*0.2;

    std::cout << "Your tax is: " << tax << std::endl;
}