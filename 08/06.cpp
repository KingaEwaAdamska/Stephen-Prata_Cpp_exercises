#include<iostream>

template<typename T>
T max(T * tab, int tab_size);

int main(){
    int tab1[4] = {0, 3, 5, 9};
    double tab2[5] = {0.3, 1.3, 5.2, 9.1, 2.7};

    std::cout << max(tab1, 4) << std::endl;
    std::cout << max(tab2, 5) << std::endl;
}

template<typename T>
T max(T * tab, int tab_size){
    T max_value = tab[0];
    for (int i = 1; i < tab_size; i++){
        if (max_value < tab[i])
            max_value = tab[i];
    }
    return max_value;
}
