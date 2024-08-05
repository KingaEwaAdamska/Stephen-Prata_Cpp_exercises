#include<iostream>
int main()
{
    struct car
    {
        char brand[20];
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
        std::cin.getline((cars + i)->brand, 20);
        std::cout << "Year of production: ";
        std::cin >>  (cars + i)->year;
        std::cin.get();
    }

    for (int i = 0; i < amount_cars; i++)
    {
        std::cout << (cars + i)->year << ", " << (cars + i)->brand << std::endl;
    }

}