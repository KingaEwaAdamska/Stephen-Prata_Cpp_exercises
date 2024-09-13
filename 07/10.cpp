#include<iostream>

double add(double x, double y);
double subtract(double x, double y);
double calculate(double x, double y, double (*pf[])(double, double), int i);

int main(){
    double x, y;
    double (*pf[])(double,double)={add, subtract};
    std::cout << "Enter x: ";
    std::cin >>  x;
    std::cout << "Enter y: ";
    std::cin >>  y;
    std::cout<<  x << " + " << y << " = "  << calculate(x, y, pf, 0) << std::endl;
    std::cout<<  x << " - " << y << " = "  << calculate(x, y, pf, 1) << std::endl;
}

double calculate(double x, double y, double (*pf[])(double, double), int i){
    return pf[i](x,y);
}

double add(double x, double y){
    return x+y;
}

double subtract(double x, double y){
    return x-y;
}