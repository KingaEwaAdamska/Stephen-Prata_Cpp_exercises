#include<iostream>

int main()
{
    using namespace std;

    const float L_IN_GAL = 3.875;
    const float KM100_IN_MILE = 62.14;

    cout << "Enter the consumption of your car in liters per 100km: ";
    float l_km;
    cin >> l_km;
    


    cout << "the combustion of your car is " << int(L_IN_GAL*KM100_IN_MILE/l_km)<< " miles on gal" << endl;
    return 0;
}