#include<iostream>

unsigned long factorial(int n);

int main()
{   
    int number;
    std::cout << "Enter number, invalid data ends program: ";
    while (std::cin >> number)
    {
        std::cout << number << "! = " << factorial(number) << std::endl;

        std::cout << "Enter number, invalid data ends program: ";
    }
    
}

unsigned long factorial(int n)
{
    if(n == 0)
        return 1;
    return n * factorial(n-1);
}