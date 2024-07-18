#include<iostream>

int main()
{
    int age;
    std::cout << "Give your age" << std::endl;
    std::cin >> age;
    std::cout << "Your  age in  months  is: " << age*12 <<  std::endl;
    return 0;
}