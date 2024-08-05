#include<iostream>
const int ArSize = 100;
int main()
{
    float daphne, cleo;
    daphne = cleo = 100;
    int i = 1;
    do{
        daphne +=  10;
        cleo *=1.05;
        std::cout << i++ << " Year, Cleo: "<< cleo << "Daphne: " <<  daphne << std::endl;
    }while (cleo<daphne);
    return 0;
}