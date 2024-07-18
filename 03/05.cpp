#include<iostream>

int main()
{
    using namespace std;
    cout << "Enter amount of people on the world: ";
    unsigned long long world_amount;
    cin >> world_amount;
    cout << "Enter amount of people in Poland: ";
    unsigned long long poland_amount;
    cin >> poland_amount;

    cout << "Population of Poland is " << double(poland_amount)/world_amount*100 << "% of world population";
    return 0;
}
