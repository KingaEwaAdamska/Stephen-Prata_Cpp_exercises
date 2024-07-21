#include<iostream>
#include<string>


int main ()
{
    using namespace std;
    string name;
    string dessert;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Ener your favourite dessert: ";
    getline(cin, dessert);

    cout << "I have for you " << dessert << ", " << name <<  endl;

}