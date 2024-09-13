// arrfun3.cpp -- funkcje obsługujące tablica i const
#include <iostream>
const int Max = 5;

// prototypy funkcji
int fill_array( double * arr_begin, double * arr_end);
void show_array(const double * arr_begin, const double * arr_end);  // nie zmienia danych
void revalue(double r, double * arr_begin, double * arr_end);

int main()
{
    using namespace std;
    double properties[Max];

    int size = fill_array(properties, properties + Max);
    show_array(properties, properties + size -1);
    if (size > 0)
    {
        cout << "Podaj czynnik zmiany wartości: ";
        double factor;
        while (!(cin >> factor)) // nieliczbowa wartość na wejściu
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Niepoprawna wartość; podaj liczbę: ";
        }
        revalue(factor, properties, properties + size -1 );
        show_array(properties, properties + size - 1 );
    }
    cout << "Gotowe.\n";
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double * arr_begin, double * arr_end)
{
    using namespace std;
    double temp;
    double * pt;
    int i = 0;
    for (pt = arr_begin; pt != arr_end; pt++)
    {
        cout << "Podaj wartość nr " << (++i) << ": ";
        cin >> temp;
        if (!cin)    // błędne dane
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Błędne dane, wprowadzanie danych przerwane.\n";
           break;
        }
        else if (temp < 0)     // nakaz zakończenia
            break;
        * pt = temp;
    }
    return i;
}

// poniższa funkcja może użyć tablicy, której adres przekazano
// w ar, ale nie może jej modyfikować
void show_array(const double * arr_begin, const double * arr_end)
{ 
    using namespace std;
    int i = 0;
    const double * pt;
    for (pt = arr_begin; pt != arr_end; pt++)
    {
        cout << "Nieruchomość nr " << (++i) << ": ";
        cout << *pt << endl;
    }
}

// mnoży każdy element ar[] przez r
void revalue(double r, double * arr_begin, double * arr_end)
{

    double * pt;
    for (pt = arr_begin; pt != arr_end; pt++)
        *pt *= r;
}
