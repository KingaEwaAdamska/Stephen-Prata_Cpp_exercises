#include<iostream>
#include<string>

int main()
{
    struct snack
    {
        std::string brand;
        float weight;
        int calories;
    } bar = {"Mocha munch", 2.3 , 350};

    std::cout << bar.brand << std::endl << "Weight: " << bar.weight << std::endl << "Calories: " << bar.calories << std::endl;
    
}