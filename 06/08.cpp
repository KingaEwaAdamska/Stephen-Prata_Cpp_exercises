#include<fstream>
#include<iostream>
int main()
{
    std::ifstream file;
    char ch;
    int characters = 0;
    file.open("data.txt");
    if(!file.is_open())
        exit(EXIT_FAILURE);

    while (file.get(ch))
    {
        characters++;
    }
    file.close();
    std::cout << characters << std::endl;
}