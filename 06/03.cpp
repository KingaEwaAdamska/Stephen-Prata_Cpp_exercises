#include<iostream>
void menu();
int main()
{   
    menu();
    char option;
    do
    {
        std::cout << "\nPlease enter letter h,p,t or g: ";
        std::cin >> option;
        
    }while(!(option == 'h' || option == 'p' || option == 't' || option == 'g'));

    switch (option)
    {
    case 'h':
        std::cout << "Stegosaurus is herbivore \n";
        break;
    
    case 'p':
        std::cout << "Chopin is a pianist\n";
        break;
        
    case 't':
        std::cout << "Oak is a tree \n";
        break;

    default:
        std::cout << "Stardew Valley is paceful game\n";
        break;
    }
}

void menu()
{
    std::cout << "h) herbivore   p)pianist \n";
    std::cout << "t) tree        g)game \n";
}