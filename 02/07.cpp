#include<iostream>

void time(int h, int m);

int main()
{
    int hour,minute;
    std::cout << "Give hour" << std::endl;
    std::cin >> hour;
    std::cout << "Give minute" << std::endl;
    std::cin >> minute;
    time(hour, minute);
    return 0;
}
void time (int h, int m)
{
    std::cout << "It's " << h << ":" << m << std::endl;
}