#include<iostream>

float conv_to_dec(int deg, int min, int sec);

int main()
{
    using namespace std;
    cout << "Enter lenght\nEnter degrees: ";
    int degrees;
    cin >> degrees;
    cout << "Enter minutes: ";
    int minutes;
    cin >> minutes;
    cout << "Enter seconds: ";
    int seconds;
    cin >> seconds;


    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " second = " << conv_to_dec(degrees, minutes, seconds) << endl;

    return 0;
}
float conv_to_dec(int deg, int min, int sec)
{
    const int MIN_IN_DEG = 60;
    const int SEC_IN_DEG = 3600;

    return deg + float(min)/MIN_IN_DEG + float(sec)/SEC_IN_DEG;
}