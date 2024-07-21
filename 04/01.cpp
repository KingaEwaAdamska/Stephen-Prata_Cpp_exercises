#include<iostream>
#include<string>

int main ()
{
    struct person
    {
        std::string name;
        std::string surname;
        int grade;
        int age;
    };
    person user;
    std::cout << "Enter name: ";
    std::getline(std::cin,user.name);
    std::cout << "Enter surname: ";
    std::getline(std::cin,user.surname);
    std::cout << "Enter grade: ";
    std::cin >> user.grade;
    std::cout << "Enter age: ";
    std::cin >> user.age;

    std::cout << "Name: " << user.name << "\n Surname: " << user.surname  << "\n grade: "
    << user.grade-1 << std::endl;
}