#include<iostream>

int main()
{
    int amount_lines;
    std::cout << "Enter number of lines: ";
    std::cin >> amount_lines;
    for (int i = 0; i < amount_lines; i++)
    {
        for (int j = 0; j < (amount_lines - i - 1); j++)
            std::cout << ".";
        for (int j = 0; j < i + 1; j++)
            std::cout << "*";
        std::cout << std::endl;
    }
}