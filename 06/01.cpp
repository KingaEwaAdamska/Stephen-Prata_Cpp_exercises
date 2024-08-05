#include<iostream>
#include<cctype>

int main()
{
    char ch;
    std::cout << "Ener text, '@' ends \n";
    while ((ch = std::cin.get()) != '@')
    {
        if (!isdigit(ch))
        {
            if (isalpha(ch))
            {
                if (isupper(ch))
                    ch = tolower(ch);
                else
                    ch = toupper(ch);
            }
            std::cout << ch;
        }
    }
    
}