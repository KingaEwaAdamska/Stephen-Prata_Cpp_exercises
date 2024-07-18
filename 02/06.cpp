#include<iostream>

double calc(double  light_yrs);
int main()
{
    double light_yrs;
    std::cout << "Give a  distance in ligh years" << std::endl;
    std::cin >> light_yrs;
    std::cout << "Distance in anstronomical unit is " << calc(light_yrs) <<std::endl;

    return 0;
}
double calc(double  light_yrs)
{
    return light_yrs*63240;
}