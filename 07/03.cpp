#include<iostream>


struct box
{
    char manufacturer[40];
    float height;
    float lenght;
    float width;
    float volume;
};

void show_box(box box1);
void vol_box(box * box1);

int main()
{
    box box1;
    std::cout << "Enter manufacturer: ";
    std::cin.getline(box1.manufacturer, 40);
    std::cout << "Enter height: ";
    std::cin >> box1.height;
    std::cout << "Enter lenght: ";
    std::cin >> box1.lenght;
    std::cout << "Enter width: ";
    std::cin >> box1.width;
    vol_box(&box1);
    show_box(box1);
}

void vol_box(box * box1)
{
    box1->volume  =  box1->height*box1->lenght*box1->width;
}

void show_box(box box1)
{
    std::cout << "Manufacturer: " << box1.manufacturer << std::endl;
    std::cout << "Height: " << box1.height << std::endl;
    std::cout << "Lenght: " << box1.lenght << std::endl;
    std::cout << "Width: " << box1.width << std::endl;
    std::cout << "Volume: " << box1.volume << std::endl;

}