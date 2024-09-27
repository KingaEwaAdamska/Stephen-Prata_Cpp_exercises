#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("data.txt");  // Otwórz plik do odczytu
    if (!file.is_open()) {
        std::cerr << "Nie można otworzyć pliku!" << std::endl;
        return 1;
    }

    std::string linia;
    while (std::getline(file, linia)) {  // Wczytaj linię do stringa
        std::cout << linia << std::endl; // Wypisz linię na konsolę
    }

    file.close(); // Zamknij plik
    return 0;
}
