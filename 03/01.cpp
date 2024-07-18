#include<iostream>

void convert_to_british(int height_cm);
int main()
{
    std::cout << "Give your height in centimeters" << std::endl;
    int height;
    std::cin >> height;
    convert_to_british(height);
}
void convert_to_british(int height_cm)
{
    const float CM_IN_INCH = 2.54;
    const int INCH_IN_FEET = 12;
    int feets = height_cm / CM_IN_INCH / INCH_IN_FEET;
    int inches = height_cm/CM_IN_INCH - feets*INCH_IN_FEET;
    std::cout << "Your height  is " << feets << " feets, " << inches << " inches." << std::endl;
}