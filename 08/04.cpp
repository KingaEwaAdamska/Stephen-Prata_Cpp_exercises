#include<iostream>
#include<cstring>

struct stringy {
    char * str;
    int ct;
};

void set(stringy & rbeany, char * text);
void show(const stringy & rbeany, int n = 1);
void show(const char * text, int n = 1);

int main(){
    stringy beany;
    char testing[] = "Rzeczywistość to już nie to, co kiedyś.";

    set(beany, testing);
    show(beany);
    show(beany,2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Gotowe!");

    return 0;
}

void set(stringy & rbeany, char * text){
    int i = 0;
    while (text[i]!='\0'){
        i++;
    }
    rbeany.ct = i;
    rbeany.str = text;
}

void show(const stringy & rbeany, int n){
    for(int i = 0; i < n; i++)
    std::cout << rbeany.str << std::endl;
}

void show(const char * text, int n){
    for(int i = 0; i < n; i++)
    std::cout << text << std::endl;
}