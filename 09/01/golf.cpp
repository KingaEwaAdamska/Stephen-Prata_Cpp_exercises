#include "golf.h"
#include<iostream>
#include<cstring>

void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

void setgolf(golf & g)
{
    char name[Len];
    int hc;
    std::cout << "Enter name: ";
    std::cin.get(name, Len);
    strcpy(g.fullname, name);
    std::cout << "Enter handicap: ";
    std::cin >> hc;
    g.handicap = hc;
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    std::cout << "Full name: " << g.fullname << std::endl;
    std::cout << "Handicap: " << g.handicap << std::endl;
}