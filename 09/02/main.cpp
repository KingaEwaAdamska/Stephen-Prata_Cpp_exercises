// static.cpp -- stosowanie lokalnej zmiennej statycznej
#include <iostream>
#include <string>

// prototyp funkcji:
void strcount(const std::string str);

int main()
{
    using namespace std;
    string input;
    char next;

    cout << "Wprowadź wiersz:\n";
    getline(cin, input);
    while (input != "")
    {
        strcount(input);
        cout << "Wprowadź następny wiersz (wiersz pusty kończy wprowadzanie):\n";
        getline(cin, input);
    }
    cout << "Koniec\n";
    return 0;
}

void strcount(const std::string str)
{
    using namespace std;
    static int total = 0;          // statyczna zmienna lokalna

    cout << "\"" << str << "\" zawiera ";
    
    total += str.length();
    cout << str.length() << " znaków\n";
    cout << "Łącznie "<< total << " znaków\n";
}