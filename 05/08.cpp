#include<iostream>
#include<cstring>
int main()
{
    int amount = -1;
    char word[15];
    std::cout << "Enter the words when you finish write ‘done’";
    
    do{
        std::cin>>word;
        amount++;
    }while (std::strcmp(word,"done"));

    std::cout << "You entered " << amount << " words" << std::endl;
    return 0;
}