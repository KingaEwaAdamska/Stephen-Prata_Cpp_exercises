#include<iostream>
#include<string>

int main()
{
    struct pizza_data
    {
        std::string brand;
        float weight;
        int diameter;
    };

    pizza_data pizza;

    std::cout << "Enter brand: ";
    std::getline(std::cin,pizza.brand);
    std::cout << "Enter weight: ";
    std::cin >> pizza.weight;
    std::cout << "Enter diameter: ";
    std::cin >> pizza.diameter;

    std::cout << "Brand: " << pizza.brand << std::endl;
    std::cout << "Weight: " << pizza.weight << std::endl;
    std::cout << "Diameter: " << pizza.diameter << std::endl;

}