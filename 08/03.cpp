#include<iostream>
#include<string>

void change_to_uppercase(std::string & text);

int main(){

    std::string text;

    std::cout << "Enter text (q ends): ";
    std::cin >> text;
    while(text != "q"){
        change_to_uppercase(text);
        std::cout << text << std::endl;
        std::cout << "Enter text (q ends): ";
        std::cin >> text; 
    }
}

void change_to_uppercase(std::string & text){
    for(char &c : text){
        c = std::toupper(c);
    }
}