//      MADE IN DIFFERENT WAY

#include<iostream>
#include<vector>

void fill_array(std::vector<double> & arr);
void show_array(const std::vector<double> & arr);
void reverse_array(std::vector<double> & arr);


int main()
{
    std::vector<double> arr;
    fill_array(arr);
    std::cout << "Array: " << std::endl;
    show_array(arr);
    reverse_array(arr);
    std::cout << "Reversed array: " << std::endl;
    show_array(arr);
}

void fill_array(std::vector<double> & arr)
{
    double num;
    int i = 0;
    std::cout << "Enter numbers, invalid data ends \n1: ";
    while (std::cin >> num)
    {
        arr.push_back(num);
        i++;
        std::cout << i+1 << ": ";
    }
}

void show_array(const std::vector<double> & arr)
{   
    for ( const double & num : arr )
    {
        std::cout << num << std::endl;
    }
}

void reverse_array(std::vector<double> & arr)
{
    //std::reverse(arr.begin(), arr.end());
    double holder;
    for (int i = 0; i < (arr.size()/2); i++)
    {
        holder = arr[i];
        arr[i] = arr[arr.size()-i-1];
        arr[arr.size()-i-1] = holder;
    }
}