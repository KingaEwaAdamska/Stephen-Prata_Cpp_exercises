#include "sales.h"

int main()
{
    SALES::Sales sale1;
    SALES::Sales sale2;
    double ar[] =  {0.9, 1.2, 0.8, 0.7};
    setSales(sale1);
    setSales(sale2, ar, 4);
    showSales(sale1);
    showSales(sale2);
}