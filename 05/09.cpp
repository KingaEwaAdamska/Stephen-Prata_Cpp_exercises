#include<iostream>
#include<string>
int main()
{
    struct car
    {
        std::string brand;
        int year;
    };

    int amount_cars;
    std::cout << "How many cars you want to catalogue?" << std::endl;
    std::cin >> amount_cars;
    std::cin.get();
    car * cars = new  car[amount_cars];

    for (int i = 0; i < amount_cars; i++)
    {
        std::cout << "Car #" <<  i+1 << std::endl << "Brand: ";
        getline(std::cin,  (cars + i)->brand);
        std::cout << "Year of production: ";
        std::cin >>  (cars + i)->year;
        std::cin.get();
    }

    for (int i = 0; i < amount_cars; i++)
    {
        std::cout << (cars + i)->year << ", " << (cars + i)->brand << std::endl;
    }

}