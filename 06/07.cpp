#include<iostream>
#include<cctype>

int check();
int main()
{
    char ch;
    std::cout << "Enter words('q' ends): \n";
    int type[4] = {0,0,0,0}; //0 - vowel, 1 - consonant, 2 - other, 3- end

    type[check()]++;
    do{
        ch = std::cin.get();
        if (isspace(ch))
            (type[check()])++;

    }while (type[3] != 1);

    std::cout << "Words starting with vowel: " <<  type[0] << std::endl;
    std::cout << "Words starting with consonant: " <<  type[1] << std::endl;
    std::cout << "Words starting with other: " <<  type[2] << std::endl;
    
}

int check()
{
    char ch;
    ch = std::cin.get();
    if (isalpha(ch))
        switch (ch)
        {
            case 'a':
            case 'e':
            case 'o':
            case 'u':
            case 'i':
            case 'y':
                return 0;
                break;
            case 'q':
                
                if (ch = std::cin.get() || isspace(ch) )
                    return 3;
                else
                    return 1;
                break;
            default:
                return 1;
                break;
        }
    else
        return 2;
    return 2;
}