#include "sales.h"
#include<iostream>

void setSales(SALES::Sales & s, const  double ar[], int n)
{
    double sum;
    for(int i = 0; i < n; i++)
    {
        s.sales[i] = ar[i];
        if(s.sales[i] > s.max)
            s.max = s.sales[i];
        if(s.sales[i] > s.max)
            s.max = s.sales[i];
        sum += s.sales[i];
    }
    s.average = sum/SALES::QUARTERS;

}

void setSales(SALES::Sales & s)
{
    double sum;
    s.max = 0;
    s.min = 1;
    for (int i = 0; i < SALES::QUARTERS; i++)
    {
        std::cout << "Enter " << i+1 << ". sale: ";
        std::cin >> s.sales[i];
        if(s.sales[i] > s.max)
            s.max = s.sales[i];
        if(s.sales[i] < s.min)
            s.min = s.sales[i];
        sum += s.sales[i];
    }
    s.average = sum/SALES::QUARTERS;
}

void showSales(const SALES::Sales & s)
{
    for (int i = 0; i < SALES::QUARTERS; i++)
    {
        std::cout << "Sale " << i+1  << ": " << s.sales[i] << std::endl;
    }
        std::cout << "Avg: " << s.average << std::endl;
        std::cout << "Max: " << s.max << std::endl;
        std::cout << "Min: " << s.min << std::endl;

}