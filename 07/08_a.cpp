//arrobj.cpp -- funkcje z obiektami typu array (C++11)
#include <iostream>
#include <string>

// dane stałe
const int Seasons = 4;
const char * rok[] =
{"Wiosna", "Lato", "Jesień", "Zima"};

// funkcja modyfikująca tablicę typu array
void fill(double (&pa)[Seasons]);

// funkcja przetwarzająca tablicę typu array bez ingerencji w jej zawartość
void show(const double (&da)[Seasons]);

int main()
{
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
    return 0;
}

void fill(double (&pa)[Seasons])
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Podaj wydatki za okres >>" << rok[i] << "<<: ";
        cin >> pa[i];
    }
}
void show(const double (&da)[Seasons])
{
    using namespace std;
    double total = 0.0;
    cout << "\nWYDATKI\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << rok[i] << ": " << da[i] << " zł" << endl;
        total += da[i];
    }
    cout << "Łącznie wydatki roczne: " << total << " zł " << endl;
}
