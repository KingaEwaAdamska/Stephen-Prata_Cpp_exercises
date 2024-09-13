//arrobj.cpp -- funkcje z obiektami typu array (C++11)
#include <iostream>
#include <string>

// dane stałe
const int Seasons = 4;
const char * rok[] =
{"Wiosna", "Lato", "Jesień", "Zima"};
struct Wydatki
{
    double expenses[Seasons];
};
// funkcja modyfikująca tablicę typu array
void fill(Wydatki & pa);

// funkcja przetwarzająca tablicę typu array bez ingerencji w jej zawartość
void show(Wydatki da);

int main()
{
    Wydatki exp1;
    fill(exp1);
    show(exp1);
    return 0;
}

void fill(Wydatki & pa)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Podaj wydatki za okres >>" << rok[i] << "<<: ";
        cin >> pa.expenses[i];
    }
}
void show(Wydatki da)
{
    using namespace std;
    double total = 0.0;
    cout << "\nWYDATKI\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << rok[i] << ": " << da.expenses[i] << " zł" << endl;
        total += da.expenses[i];
    }
    cout << "Łącznie wydatki roczne: " << total << " zł " << endl;
}
