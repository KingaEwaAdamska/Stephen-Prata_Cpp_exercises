#include<iostream>

template<typename T>
T max5(T tab[5]);

int main(){
    int tab1[5] = {0, 3, 5, 9, 2};
    double tab2[5] = {0.3, 1.3, 5.2, 9.1, 2.7};

    std::cout << max5(tab1) << std::endl;
    std::cout << max5(tab2) << std::endl;
}

template<typename T>
T max5(T tab[5]){
    T max = tab[0];
    for (int i = 1; i < 5; i++){
        if (max < tab[i])
            max = tab[i];
    }
    return max;
}