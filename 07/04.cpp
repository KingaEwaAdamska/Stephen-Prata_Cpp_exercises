#include <iostream>
long double probability(unsigned numbers, unsigned picks, int add_num);
int main()
{
    double total, choices, additional_number;
    std::cout << "Podaj największą liczbę, jaką można wybrać, liczbę dodatkową oraz\n"
            "liczbę skreśleń:\n";
    while ((std::cin >> total >> additional_number >> choices) && choices <= total)
    {
        std::cout << "Szansa wygranej to jeden do ";
        std::cout << probability(total, choices, additional_number); 
        std::cout << ".\n";
        std::cout << "Następne dwie liczby (q, aby zakończyć): ";
    }
    std::cout << "do widzenia\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks, int add_num)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ; 
    return result / add_num;
}
