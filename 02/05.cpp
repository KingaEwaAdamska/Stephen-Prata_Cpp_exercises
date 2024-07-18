#include<iostream>

int main()
{
    int temperature;
    std::cout << "Give temperature in Celsius degrees" << std::endl;
    std::cin >> temperature;
    std::cout << "Temperature in  Farhrenheit is " << temperature*1.8 - 32 <<  std::endl;
    return  0;
}