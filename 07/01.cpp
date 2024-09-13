#include<iostream>


double harmonic_mean(double x, double y);
void num_enter();

int main()
{
    num_enter();
}

void num_enter()
{   
    int x, y;
    do
    {
    std::cout << "Enter two numbers separated by a space: ";
    if (!(std::cin >> x) || !(std::cin >> y) || x == 0 || y == 0)
    {
        std::cout << "Invalid data ends the program" << std::endl;
        return;
    }
    std::cout << "Haromonic mean is: " << harmonic_mean(x,y) << std::endl;
    }while (true);
}

double harmonic_mean(double x, double y)
{
    return 2.0*x*y/(x+y);
}