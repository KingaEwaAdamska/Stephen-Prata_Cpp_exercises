#include<iostream>
const int ArSize = 100;
int main()
{
    int sum, x;
    sum = 0;
    std::cout << "Enter numbers, 0 ends";
    do{
        std::cin >> x;
        sum += x;
        std::cout << "Total is: " << sum << std::endl;
    }while(x!=0);
    return 0;
}