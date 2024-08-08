#include<iostream>

int main()
{
    double donations[10];
    std::cout << "Enter donation: " << std::endl;
    std::cout << "1: ";
    int i = 0;
    double avr  = 0;
    while ((std::cin >> donations[i]) && i < 10)
    {
        i++;
        std::cout << i+1 << ": ";
    }
    for (int j = 0; j < i;  j++)
    {
        avr += donations[j];
    }
    std::cout << "Average is: " << avr/i;
}