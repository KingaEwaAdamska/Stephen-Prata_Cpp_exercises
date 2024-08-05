#include<iostream>

int main()
{
    using namespace std;
    cout << "Enter two integers: " << endl;
    int  x,y,sum = 0;
    cin >> x;
    cin >> y;
    for (int i = x; i<=y ; i++) 
    {
        sum+=i;
    }
    cout << "Sum is equal: " << sum << endl;
    return 0;
}