#include<iostream>
#include<string>

int main()
{
    struct snack
    {
        std::string brand;
        float weight;
        int calories;
    };

    snack * bar = new snack [3] {
        {"Mocha munch", 2.3 , 350},
        {"Miillky way", 3.5 , 400},
        {"Snickers", 2.6 , 330},
    };

    std::cout << bar->brand << std::endl << "Weight: " << bar->weight << std::endl << "Calories: " << bar->calories << std::endl;
    std::cout << (bar+1)->brand << std::endl << "Weight: " << (bar+1)->weight << std::endl << "Calories: " << (bar+1)->calories << std::endl;
    std::cout << (bar+2)->brand << std::endl << "Weight: " << (bar+2)->weight << std::endl << "Calories: " << (bar+2)->calories << std::endl;
    
}