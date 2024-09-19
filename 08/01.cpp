#include<iostream>
#include<string>

template<typename T1>
void show(std::string text, T1 x);

void show(std::string text){
    show(text, 0);
}

int callCount = 0;

int main(){
    show("Ala ma kota",1);
    show("Ala ma kota");
    show("Ala ma kota",2.3);
    show("Ala ma kota");
    show("Ala ma kota",5);
}

template<typename T1>
void show(std::string text, T1 x){
    callCount++; 
    std::cout << callCount;
    if(x){
        for(int i = 0; i < callCount; i++)
        std::cout << text << std::endl;
    }else{
        std::cout << text << std::endl;
    }
}