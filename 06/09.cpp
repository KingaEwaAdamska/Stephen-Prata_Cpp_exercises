#include<iostream>
#include<fstream>
#include<string>

struct contribute
{
    std::string surname;
    double amount;
};

std::ifstream file("data.txt");

void sponsors(contribute *tab, int x);
void w_sponsors(contribute *tab, int x);
void fill_contr(contribute *tab, int x);
int main()
{
    int quantity;

    file >> quantity;
    file.ignore();
    contribute * contributors = new contribute[quantity];

    std::cout  << quantity ;

    
    fill_contr(contributors, quantity);
    w_sponsors(contributors, quantity);
    sponsors(contributors, quantity);

    delete [] contributors;
}

void fill_contr(contribute *tab, int x)
{
    for (int i = 0; i < x; i++)
    {
        std::getline(file, tab[i].surname);
        file >> tab[i].amount;
        file.ignore();
    }
}

void w_sponsors(contribute *tab, int x)
{
    std::cout << "Our wonderful sponsors:\n";
    for (int i = 0; i < x ; i++)
    {   
        if (tab[i].amount >= 10000)
            std::cout << tab[i].surname << std::endl;
    }
}

void sponsors(contribute *tab, int x)
{
    std::cout << "Our sponsors:\n";
    for (int i = 0; i < x; i++)
    {   
        if (tab[i].amount < 10000)
            std::cout << tab[i].surname << std::endl;
    }

}

