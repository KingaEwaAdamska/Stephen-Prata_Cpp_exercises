#include<iostream>
#include<string>
struct zpdw
{
    std::string name;
    std::string nickname;
    std::string position;
    int pref;
};
void menu();
void opt_a(zpdw *memb);
void opt_b(zpdw *memb);
void opt_c(zpdw *memb);
void opt_d(zpdw *memb);



int main()
{
    
    zpdw members[3] = 
    {
        {"Kinga", "Visenna", "programmer" , 1},
        {"Kuba", "MasterGameOne", "electronics engineer", 2},
        {"Jan", "John", "boss", 0}
    };

    char opt;

    menu();

    do
    {
        std::cout << "Enter option: ";
        std::cin >> opt;
        switch (opt)
        {
            case 'a': opt_a(members); break;
            case 'b': opt_b(members); break;
            case 'c': opt_c(members); break;
            case 'd': opt_d(members); break;
        }
    } while (opt != 'q');
    
    std::cout << "See you soon!\n";
}

void menu()
{
    std::cout << "Goodwill developers' order" << std::endl;
    std::cout << "a. list by name        b. list by position" << std::endl;
    std::cout << "c. list by nicknames   d. list by preferences" << std::endl;
    std::cout << "q. quit" << std::endl;
}

void opt_a(zpdw *memb)
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << memb[i].name << std::endl;
    }
}
void opt_b(zpdw *memb)
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << memb[i].nickname << std::endl;
    }
}
void opt_c(zpdw *memb)
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << memb[i].position << std::endl;
    }
}

void opt_d(zpdw *memb)
{
    for (int i = 0; i < 3; i++)
    {
        if (memb[i].pref == 0)
        std::cout << memb[i].name << std::endl;
        else if (memb[i].pref == 1)
        std::cout << memb[i].nickname << std::endl;
        else
        std::cout << memb[i].position << std::endl;
    }
}