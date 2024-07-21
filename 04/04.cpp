#include<iostream>
#include<string>

int main ()
{
    using namespace std;
    string name, surname, fullname;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Ener your surname: ";
    getline(cin, surname);
    fullname = surname + ", " + name;
    cout << "fullname: " << fullname << endl;

}