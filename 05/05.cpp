#include <iostream>
using namespace std;

int main() {
    const char* months[] = {"January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};
    const int NUM_MONTHS = 12;
    int sales[NUM_MONTHS] = {0};
    int totalSales = 0;

    for (int i = 0; i < NUM_MONTHS; ++i) {
        cout << "Enter amount of books sold in " << months[i] << ": ";
        cin >> sales[i];
    }

    for (int i = 0; i < NUM_MONTHS; ++i) {
        totalSales += sales[i];
    }

    cout << "Total sale is: " << totalSales << " books." << endl;

    return 0;
}
