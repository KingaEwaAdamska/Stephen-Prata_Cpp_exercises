#include<iostream>
#include<cstring>


int main ()
{
    using namespace std;
    char name[20];
    char surname[20];
    char fullname[40];
    cout << "Enter your name: ";
    cin.getline(name,20);
    cout << "Ener your surname: ";
    cin.getline(surname,20);
    strcpy(fullname, surname);
    strcat(fullname, ", ");
    strcat(fullname, name);
    cout << "fullname: " << fullname << endl;

}