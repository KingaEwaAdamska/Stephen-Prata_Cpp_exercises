#include<iostream>
#include<vector>
int enter_data(std::vector<int> * scores);
double mean(std::vector<int> * scores, int amount);
void show_data(std::vector<int> * scores, int amount);

int main()
{
    std::vector<int> * scores;
    int i = enter_data(scores);
    show_data(scores, i);
}

int enter_data(std::vector<int> * scores)
{
    std::cout << "Enter scores (max 10, invalid data ends): \n";
    int i = 0;
    std::cout << i+1 <<": ";
    while (std::cin >> (*scores)[i] && i<10)
    {
        i++;
        std::cout << i+1 << ": ";
    }
    return i;
}
double mean(std::vector<int> * scores, int amount)
{
    int sum = 0;
    for(int i = 0; i < amount; i++)
        sum += (*scores)[i];
    return sum/amount;
}

void show_data(std::vector<int> * scores, int amount)
{
    for(int i = 0; i < amount; i++)
        std::cout << (*scores)[i] << ", ";
    std::cout << "\nMean: " << mean(scores, amount) << std::endl;
}