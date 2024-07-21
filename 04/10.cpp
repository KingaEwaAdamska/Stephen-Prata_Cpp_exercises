#include<iostream>
#include<array>

int main()
{
    std::array<float,3> times;
    std::cout << "Enter your times in  sprint: " <<  std::endl;

    std::cout << "1: ";
    std::cin>>times[0];
    std::cout << "2: ";
    std::cin>>times[1];
    std::cout << "3: ";
    std::cin>>times[2];
    std::cout << "Your average time is: " << (times[0] + times[1] + times[2])/3  <<  std::endl;
}