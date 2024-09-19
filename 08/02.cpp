#include<iostream>
#include<string>

struct Batonik
{
    std::string marka;
    double waga;
    int kalorie;
};

void fill(Batonik & snack, const std::string brand = "Millnnium Munch", const double weight = 2.85, const int calories = 350);
void show(Batonik & snack);

int main(){
    Batonik snack;

    int calories = 321;
    double weight = 5.0;
    std::string brand = "Milky way";

    fill(snack);
    show(snack);

    fill(snack,brand,weight);
    show(snack);

    fill(snack,brand,weight,calories);
    show(snack);
}

void fill(Batonik & snack, const std::string brand, const double weight, const int calories){
    snack.marka = brand;
    snack.waga = weight;
    snack.kalorie = calories;
}

void show(Batonik & snack){
    std::cout << "Bar brand: " << snack.marka << std::endl;
    std::cout << "Weight: " << snack.waga << std::endl;
    std::cout << "Calories: " << snack.kalorie << std::endl;
}