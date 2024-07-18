#include<iostream>

int main()
{
    using namespace std;
    cout << "Enter the distance you have travelled in kilometers: ";
    int km;
    cin >> km;
    cout << "Enter how much petrol you used: ";
    int liters;
    cin >> liters;

    cout << "the combustion of your car is " << float(liters)/km*100 << "l/100km" << endl;
    return 0;
}