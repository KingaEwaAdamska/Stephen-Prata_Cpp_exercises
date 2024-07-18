#include<iostream>

int main()
{
    int distance_miles;
    std::cout << "Give the distance in nautical miles" << std::endl;
    std::cin >> distance_miles;
    std::cout << "Distance is equal to " << distance_miles*1852 << " meters." << std::endl;
    return 0;
}