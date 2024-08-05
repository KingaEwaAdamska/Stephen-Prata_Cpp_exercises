#include <iostream>
using namespace std;

int main() {
    const char* months[] = {"January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};
    const int NUM_MONTHS = 12;
    const int YEARS = 3;
    int sales[YEARS][NUM_MONTHS] = {0};
    int totalSales = 0;

    for (int i = 0; i < YEARS; ++i) {
        for (int j = 0; j < NUM_MONTHS; ++j)
        {
            cout << "Enter amount of books sold in " << months[j] << " in "  << i+1 <<  " year: ";
            cin >> sales[i][j];
        }
        
    }

    for (int i = 0; i < YEARS; ++i) {
        for (int j = 0; j < NUM_MONTHS; ++j)
        {
            totalSales += sales[i][j];
        }
        
    }

    cout << "Total sale is: " << totalSales << " books." << endl;

    return 0;
}
