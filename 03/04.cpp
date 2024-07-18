#include<iostream>

void convert(int sec);

int main()
{
    using namespace std;
    cout << "Enter amount of seconds: ";
    int seconds;
    cin >> seconds;

    convert(seconds);

    return 0;
}
void convert(int sec)
{
    const int SEC_IN_MIN = 60;
    const int MIN_IN_H = 60;
    const int H_IN_DAY = 24;

    std:: cout << sec << " seconds is equal to " << int(sec/SEC_IN_MIN/MIN_IN_H/H_IN_DAY) <<  " days, " << int(sec/SEC_IN_MIN/MIN_IN_H % H_IN_DAY) <<  " hours, "
    << int(sec/SEC_IN_MIN % MIN_IN_H) <<  " minutes, " << int(sec % SEC_IN_MIN) <<  " seconds." << std::endl;
}