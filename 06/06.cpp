#include<iostream>
#include<string>

struct contribute
{
    std::string surname;
    double amount;
};
void sponsors(contribute *tab, int x);
void w_sponsors(contribute *tab, int x);
void fill_contr(contribute *tab, int x);
int main()
{
    int quantity;

    std::cout << "Enter number of contributors: ";
    std::cin >> quantity;
    contribute * contributors = new contribute[quantity];

    
    fill_contr(contributors, quantity);
    w_sponsors(contributors, quantity);
    sponsors(contributors, quantity);

    delete [] contributors;
}

void fill_contr(contribute *tab, int x)
{
    for (int i = 0; i < x; i++)
    {
        do
        {
            std::cout << "Enter surname of " << i+1 <<". contributor: ";
        }while (!(std::cin >> (tab[i]).surname));
        do
        {
            std::cout << "Enter contribution amount: ";
        }while (!(std::cin >> (tab[i]).amount));  
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

