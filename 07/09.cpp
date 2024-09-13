#include<iostream>
#include<cstring>

const int SLEN = 30;
struct Student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(Student pa[], int n);
void display1(Student st);
void display2(const Student * ps);
void display3(const Student pa[], int n);

int main()
{
    std::cout << "Podaj wielkość grupy: ";
    int class_size;
    std::cin >> class_size;
    while (std::cin.get() != '\n')
    {
        continue;
    }
    Student * ptr_stu = new Student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    std::cout << "Gotowe\n";
    return 0;
}

int getinfo(Student pa[], int n){
    int i = 0;
    for (; i < n; ++i){
        std::cout << "Podaj dane " << i + 1 << " studenta.\nFullname: ";
        std::cin.get(pa[i].fullname, SLEN);
        std::cin.ignore();
        
        if (strcmp(pa[i].fullname, "") == 0) {
            break;
        }

        std::cout << "Hobby: ";
        std::cin.get(pa[i].hobby, SLEN);
        std::cin.ignore(); 

        std::cout << "Ooplevel: ";
        std::cin >> pa[i].ooplevel;
        std::cin.ignore();
    }
    return i;
}
void display1(Student st){
    std::cout << "Fullname:" << st.fullname << std::endl;
    std::cout << "Hobby:" << st.hobby << std::endl;
    std::cout << "ooplevel:" << st.ooplevel << std::endl;
}
void display2(const Student *ps){
    std::cout << "Fullname:" << ps->fullname << std::endl;
    std::cout << "Hobby:" << ps->hobby << std::endl;
    std::cout << "ooplevel:" << ps->ooplevel << std::endl;
}
void display3(const Student pa[], int n){
    for (int i = 0; i < n; i++){
        std::cout << "Fullname:" << pa[i].fullname << std::endl;
    std::cout << "Hobby:" << pa[i].hobby << std::endl;
    std::cout << "ooplevel:" << pa[i].ooplevel << std::endl;
    }
}